#include<iostream>
#include<stdlib.h>
using namespace std;
void inspect(int a){
    cout<<"value of this variable : "<<a<<endl;
}
void inspect(int *b){
    cout<<"value of this variable : "<<*b<<endl;
}
void inspect(int* arr[],int n){
    cout<<"value os this array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    inspect(a);
    cout<<"enter the value of b : ";
    cin>>b;
    inspect(&b);
    cout<<"enter number of elements : ";
    cin>>n;
    int *arr =(int *)malloc(n *sizeof(int));
    float *brr = (float *)malloc(n *sizeof(float));
    cout<<"enter elements of integer type value array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    inspect(&arr,n);
    free(arr);
    return 0;
}