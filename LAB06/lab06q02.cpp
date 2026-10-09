#include <iostream>
using namespace std;
class Duration {
private:
    int hours;
    int minutes;
public:
    Duration(int h = 0, int m = 0){
        hours = h;
        minutes = m;
        normalize();
    }
    void normalize() {
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }
    Duration operator+( Duration& other){
        return Duration(hours + other.hours, minutes + other.minutes);
    }
    void display(){
        cout<<hours<<" hrs "<<minutes<<" mins"<<endl;
    }
};
int main(){
    Duration d1(2,45),d2(1,30);
    Duration total = d1 + d2;
    cout<<"Duration 1: ";
    d1.display();
    cout<<"Duration 2: ";
    d2.display();
    cout<<"Total Duration: ";
    total.display();
    return 0;
}