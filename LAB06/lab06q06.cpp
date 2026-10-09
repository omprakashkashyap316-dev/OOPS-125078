#include <iostream>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    Date(int d,int m,int y){
        day = d;
        month = m;
        year = y
    }
    bool operator==(Date& other){
        return(day == other.day && month == other.month && year == other.year);
    }
    bool operator!=(Date& other){
        return !(*this == other);
    }
};
int main(){
    Date d1(9, 10, 2026), d2(9, 10, 2026), d3(10, 10, 2026);
    cout<<"Comparing d1 and d2:"<<endl;
    cout<<"d1 == d2: "<<(d1 == d2 ? "True" : "False")<<endl;
    cout<<"d1 != d2: "<<(d1 != d2 ? "True" : "False")<<endl;
    cout<<"Comparing d1 and d3:"<<endl;
    cout<<"d1 == d3: "<<(d1 == d3 ? "True" : "False")<<endl;
    cout<<"d1 != d3: "<<(d1 != d3 ? "True" : "False")<<endl;
    return 0;
}