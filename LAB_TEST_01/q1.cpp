#include<iostream>
using namespace std;
class parkingfloor {
    int floornumber;
    int *slot = nullptr;
public:
    void getdata(){
        cout<<"enter floor numbers : ";
        cin>>floornumber;
        slot = new int[floornumber + 1];
        for(int i=0;i<=floornumber;i++) {
            cout<<"enter "<<i<<" floor number of slot : ";
            cin>>slot[i];
        }
    }
    void reverse(){
        for(int i=0,j=floornumber;i<j;i++,j--) {
            int temp = slot[i];
            slot[i] = slot[j];
            slot[j] = temp;
        }
    }
    void reverse(int k){
        for(int i=k,j=floornumber;i<j;i++,j--) {
            int temp = slot[i];
            slot[i] = slot[j];
            slot[j] = temp;
        }
    }
    void display(){
        cout<<endl<<"number of slots in each floor"<<endl;
        for(int i=0;i<=floornumber;i++) {
            cout<<i<<" floor slots : "<<slot[i]<<endl;
        }
    }
    ~parkingfloor(){
        delete[] slot;
    }
};
int main(){
    parkingfloor p;
    int n;
    p.getdata();
    p.reverse();
    p.display();
    cout<<"enter starting floor number : ";
    cin>>n;
    p.reverse(n);
    p.display();
    return 0;
}