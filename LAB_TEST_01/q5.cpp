#include<iostream>
using namespace std;
class trip {
    int id,distance,base,cahrge;
public:
    void getdata(){
        cout<<"enter trip id : ";
        cin>>id;
        cout<<"enter distance travelled : ";
        cin>>distance;
        cout<<"enter base fare per km : ";
        cin>>base;
    }
    void fare(){
        cahrge = base*distance;
    }
    void fare(int waitingtime){
        cahrge += waitingtime;
    }
    void fare(int waitingtime, int discount) {
        cahrge += waitingtime;
        cahrge -= cahrge*discount/100;
    }
    friend void compare(trip t1,trip t2);
};
void compare(trip t1,trip t2){
    if(t1.cahrge<t2.cahrge)
        cout<<"trip 1 is cheaper.";
    else if(t2.cahrge<t1.cahrge)
        cout<<"trip 2 is cheaper.";
    else
        cout<<"both trips have the same fare.";
}
int main(){
    trip t1,t2;
    int dis1,wait1,dis2,wait2;
    t1.getdata();
    t2.getdata();
    t1.fare();
    t2.fare();
    cout<<"enter first trip waiting time : ";
    cin>>wait1;
    cout<<"enter first trip discount : ";
    cin>>dis1;
    cout<<"enter second trip waiting time : ";
    cin>>wait2;
    cout<<"enter second trip discount : ";
    cin>>dis2;
    t1.fare(wait1,dis1);
    t2.fare(wait2,dis2);
    compare(t1,t2);
    return 0;
}