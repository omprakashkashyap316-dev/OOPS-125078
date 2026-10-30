#include <iostream>
using namespace std;
class Sensor {
protected:
    int id;
public:
    Sensor(int i){
        id = id;
    }
};
class Temperature : virtual public Sensor{
protected:
    float temp;
public:
    Temperature(int i,float t) : Sensor(i){
        temp = t;
    }
};
class Humidity : virtual public Sensor{
protected:
    float humidity;
public:
    Humidity(int i,float h) : Sensor(i) {
        humidity = h;
    }
};
class FarmMonitor : public Temperature, public Humidity{
public:
    FarmMonitor(int d,float t,float h) : Sensor(d), Temperature(id, t), Humidity(id, h) {}
    void display(){
        cout<<"Sensor ID: "<<id<<endl;
        cout<<"Temperature: "<<temp<<" Celsius"<<endl;
        cout<<"Humidity: "<<humidity<<"%"<<endl;
        if(temp > 35)
            cout<<"Warning: High Temperature!"<<endl;
        if(humidity > 80)
            cout<<"Warning: High Humidity!"<<endl;
        if(temp <= 35 && humidity <= 80)
            cout<<"All Conditions Normal"<<endl;
    }
};
int main() {
    FarmMonitor f(101, 38, 85);
    f.display();
    return 0;
}