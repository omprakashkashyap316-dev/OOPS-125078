#include<iostream>
using namespace std;
class gamecontroller;
class inventory {
    int id, item;
    int *arr = nullptr;
public:
    void getdata(){
        cout<<"enter player id : ";
        cin>>id;
        cout<<"enter number of items : ";
        cin>>item;
    }
    void quantities(){
        arr = new int[item];
        for(int i=0;i<item;i++) {
            cout<<"enter "<<i+1<<" item quantity : ";
            cin>>arr[i];
        }
    }
    friend class gamecontroller;
    ~inventory(){
        delete[] arr;
    }
};
class gamecontroller{
public:
    void change(inventory &i) {
        int a,x;
        cout<<"enter item number : ";
        cin>>a;
        cout<<"enter new number of quantities : ";
        cin>>x;
        i.arr[a-1] = x;
    }
    void display(inventory &i) {
        cout<<"player id : " <<i.id<<endl;
        cout<<"number of items : "<<i.item<<endl;
        cout<<"items quantities"<<endl;
        for(int j=0;j<i.item;j++) {
            cout<<"quantity of "<<j+1<<" item : "<<i.arr[j]<<endl;
        }
    }
};
int main() {
    inventory i;
    i.getdata();
    i.quantities();
    gamecontroller g;
    g.change(i);
    g.display(i);
    return 0;
}