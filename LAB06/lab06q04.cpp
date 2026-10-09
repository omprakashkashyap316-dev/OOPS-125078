#include <iostream>
using namespace std;
class AccountBalance {
private:
    double balance;
public:
    AccountBalance(double b = 0.0){
        balance = b;
    }
    AccountBalance operator-(){
        return AccountBalance(-balance);
    }
    void display(){
        cout<<"Balance: $"<<balance<<endl;
    }
};
int main() {
    AccountBalance acc1(250.75);
    AccountBalance acc2 = -acc1;
    cout<<"Original Account ";
    acc1.display();
    cout<<"Negated Account ";
    acc2.display();
    cout<<"Verification - Original Account ";
    acc1.display();
    return 0;
}