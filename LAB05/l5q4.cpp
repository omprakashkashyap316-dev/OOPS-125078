#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int process(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
float process(float arr[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int process(int arr[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n,k;
    cout<<"enter number of elements : ";
    cin>>n;
    int *arr =(int *)malloc(n *sizeof(int));
    float *brr = (float *)malloc(n *sizeof(float));
    cout<<"enter elements of integer type value array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter elements of float type value array"<<endl;
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    cout<<"enter the value of k for first array : ";
    cin>>k;
    cout<<"sum of all elements of integer type array : "<<process(arr,n)<<endl;
    cout<<"sum of first "<<k<<" elements of integer type array : "<<process(arr,n,k)<<endl;
    cout<<"sum of all elements of float type array : "<<process(brr,n)<<endl;
    return 0;
}