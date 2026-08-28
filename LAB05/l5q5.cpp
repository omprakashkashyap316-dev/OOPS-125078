#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int swapdata(int *x,int *y){
    int temp =  *x;
    *x = *y;
    *y = temp;
}
float swapdata(float &x,float &y){
    float temp = x;
    x = y;
    y = temp;
}
int swapdata(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}
int main(){
    int x1,y1;
    float x2,y2;
    cout<<"enter integer type first(x1) number : ";
    cin>>x1;
    cout<<"enter value of y1(integer type) : ";
    cin>>y1;
    cout<<"enter value of x2(float type) : ";
    cin>>x2;
    cout<<"enter value of y2(flaot type) : ";
    cin>>y2;
    swapdata(&x1,&y1);
    swapdata(x2,y2);
    cout<<"after swap"<<endl<<"x1 : "<<x1<<endl<<"y1 : "<<y1<<endl<<"x2 : "<<x2<<endl<<"y2 : "<<y2<<endl;
    return 0;
}