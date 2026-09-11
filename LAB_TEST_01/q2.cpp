#include<iostream>
using namespace std;
class borrower {
    int br_id, days, fine;
public:
    void getdata(){
        cout<<"enter borrower id : ";
        cin>>br_id;
        cout<<"enter overdue days : ";
        cin>>days;
    }
    void calculatefine(){
        fine = days*100;
    }
    void calculatefine(int x){
        fine = days*x;
    }
    friend void compare(borrower b1, borrower b2);
};
void compare(borrower b1,borrower b2){
    if(b1.fine>b2.fine)
        cout<<"borrower 1 has higher fine.";
    else if(b2.fine>b1.fine)
        cout<<"borrower 2 has higher fine.";
    else
        cout<<"both borrowers have the same fine.";
}
int main() {
    borrower b1, b2;
    int n;
    b1.getdata();
    b2.getdata();
    b1.calculatefine();
    cout<<"enter an amount of fine per day for 2nd person : ";
    cin>>n;
    b2.calculatefine(n);
    compare(b1,b2);
    return 0;
}