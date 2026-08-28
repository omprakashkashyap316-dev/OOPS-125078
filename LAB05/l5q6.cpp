#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
void information(string arr){
    int len=0,i=0;
    while(arr[i]!='\0'){
        len++;
        i++;
    }
    cout<<"length of this string is : "<<len<<endl;
}
void information(string arr,char ch){
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==ch)
            c++;
    }
    cout<<ch<<" character occurance in this array : "<<c;
}
void information(string arr,char ch,int k){
    int c=0;
    for(int i=0;i<k;i++){
        if(arr[i]==ch)
            c++;
    }
    cout<<ch<<" character occurance in first "<<k<<" character of this array : "<<c;    
}
int main(){
    int k;
    string arr;
    char ch;
    cout<<"enter string : ";
    cin>>arr;
    cout<<"enter searching character : ";
    cin>>ch;
    cout<<"enter value of k : ";
    cin>>k;
    information(arr);
    information(arr,ch);
    information(arr,ch,k);
    return 0;
}