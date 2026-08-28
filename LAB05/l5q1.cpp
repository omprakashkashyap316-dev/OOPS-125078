#include<iostream>
using namespace std;
int convert(float kilo){
    return kilo*1000;
}
int convert(int meter){
    return meter*100;
}
int convert(long kilo){
    return kilo*1000;
}
int main(){
    int km1;
    float km2;
    long km3;
    km1=5,km2=2.3,km3=786;
    cout<<"5 meter(in cm) : "<<convert(km1)<<endl<<"2.3 kilometer(in meter ) : "<<convert(km2)<<endl<<"786 kilometer(in meter ) : "<<convert(km3)<<endl;
    return 0;
}