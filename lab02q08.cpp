#include<iostream>
using namespace std;
class hostelfee{
    int months;
    char name[30];
    int late;
    int fee;
    int id;
    public:
        void getdata(){
            cout<<"enter student name:";
            cin>>name;
            cout<<"enter id:";
            cin>>id;
            cout<<"enter monthly fee:";
            cin>>fee;
            cout<<"enter number of months stayed in hostel:";
            cin>>months;
            cout<<"fee submission on time(yes for 0 and no for any number):";
            cin>>late;
        }
        int total(){
            if(late==0){
                return months*fee;
            }
            return months*fee+500;
        }
        int display(){
            cout<<"total fee:"<<total()<<endl;
        }
};
int main(){
    hostelfee h;
    h.getdata();
    h.display();
    return 0;
}