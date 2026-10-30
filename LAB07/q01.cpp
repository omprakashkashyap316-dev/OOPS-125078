#include<iostream>
using namespace std;
class Ticket{
protected:
    string name;
    double distance;
public:
    Ticket(string s,double d){
        name = s;
        distance = d;
    }
};
class RailwayTicket : public Ticket{
    double fare;
public:
    RailwayTicket(string n,double d,double f) : Ticket(n,d){
        fare = f;
    }
    void display(){
        double fare = distance * fare;
        if (distance > 300)
            fare = fare - (fare * 0.10);
        cout<<"Passenger Name: "<<name<<endl;
        cout<<"Distance: "<<distance<<" km"<<endl;
        cout<<"Final Fare: Rs. "<<fare<<endl;
    }
};
int main() {
    RailwayTicket t("Rahul les...", 400, 5);
    t.display();
    return 0;
}
