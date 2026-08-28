#include<iostream>
using namespace std;
int area(int length,int breadth){
    return length*breadth;
}
int area(int side){
    return side*side;
}
float area(float radius){
    return 3.14*radius*radius;
}
int main(){
    int lenght,breadth,side;
    float radius;
    cout<<"enter length and breadth of a rectangle :";
    cin>>lenght;
    cin>>breadth;
    cout<<"enter side of a square : ";
    cin>>side;
    cout<<"enter radius of a circle : ";
    cin>>radius;
    cout<<endl<<"area of a rectangle : "<<area(lenght,breadth)<<endl<<"area of a square "<<area(side)<<endl<<"area of a circle : "<<area(radius)<<endl;
    return 0;
}