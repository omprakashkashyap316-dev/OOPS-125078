#include <iostream>
#include <stdlib.h>
using namespace std;
void evaluate(int a, int b) {
    float s = (a+b)/2.0;
    cout<<"Average of these two integers: "<<s<<endl;
}
void evaluate(int a,int b,int c) {
    float s = (a+b+c)/3.0;
    cout<<"Average of these three integers: "<<s<<endl;
}
void evaluate(float a,float b) {
    float s = (a+b)/2.0;
    cout<<"Average of these two floats: "<<s<<endl;
}
void evaluate(int arr[],int n) {
    float s = 0;
    for (int i=0;i<n;i++) {
        s += arr[i];
    }
    cout<<"Average of this array: "<<s/n<<endl;
}
void evaluate(int *a,int *b) {
    float s = (*a + *b)/2.0;
    cout<<"Average of these two integers using pointers: "<<s<<endl;
}
int main() {
    int n, a, b, c;
    float d, e;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    evaluate(a,b);
    cout<<endl<<"Enter three integers: ";
    cin>>a>>b>>c;
    evaluate(a,b,c);
    cout<<endl<<"Enter two float values: ";
    cin>>d>>e;
    evaluate(d,e);
    cout<<endl<<"Enter number of elements: ";
    cin>>n;
    int *arr = (int *)malloc(n * sizeof(int));
    cout<<"Enter "<<n<< " integer elements: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    evaluate(arr,n);
    free(arr);
    cout<<endl<<"Enter two integers for pointer version: ";
    cin>>a>>b;
    evaluate(&a,&b);
    return 0;
}