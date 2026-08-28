#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
void update(int n,int k){
    n += k;
    cout<<"new value of integer : "<<n<<endl;
}
void update(float n,float k){
    n += k;
    cout<<"new value of float : "<<n<<endl;
}
void update(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        arr[i] += k;
    }
    cout<<"after update"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,x,k1,k3;
    float y,k2;
    cout<<"enter value of x(integer type) : ";
    cin>>x;
    cout<<"enter value of k1 : ";
    cin>>k1;
    update(x,k1);
    cout<<"enter value of y : ";
    cin>>y;
    cout<<"enter value of k2 : ";
    cin>>k2;
    update(y,k2);
    cout<<"enter number of elements : ";
    cin>>n;
    int *arr =(int *)malloc(n *sizeof(int));
    float *brr = (float *)malloc(n *sizeof(float));
    cout<<"enter elements of integer type value array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the value of k3 : ";
    cin>>k3;
    update(arr,n,k3);
    free(arr);
    return 0;
}