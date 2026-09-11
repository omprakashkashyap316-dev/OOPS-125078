#include<iostream>
using namespace std;
class sensorgrid {
    int n;
    int *arr = nullptr;
public:
    void getdata(){
        cout<<"enter number of sensor : ";
        cin>>n;
    }
    void temp(){
        arr = new int[n];
        cout<<"enter temperature" << endl;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
    }
    friend void compare(sensorgrid s1, sensorgrid s2);
    ~sensorgrid(){
        delete[] arr;
    }
};
void compare(sensorgrid s1,sensorgrid s2){
    float sum1=0,sum2=0;
    for(int i=0;i<s2.n;i++){
        sum1 += s1.arr[i];
    }
    for(int i=0;i<s2.n;i++) {
        sum2 += s2.arr[i];
    }
    float avg1 = sum1 / s1.n;
    float avg2 = sum2 / s2.n;
    if(avg1<avg2)
        cout<<"2nd sensorgrid has higher average temperature."<<endl;
    else if(avg1>avg2)
        cout<<"1st sensorgrid has higher average temperature."<<endl;
    else
        cout<<"Both sensorgrids have the same average temperature."<<endl;
}

int main(){
    sensorgrid s1,s2;
    s1.getdata();
    s1.temp();
    s2.getdata();
    s2.temp();
    compare(s1, s2);
    return 0;
}