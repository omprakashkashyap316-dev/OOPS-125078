#include<iostream>
#include<string>
using namespace std;
void check(int n){
    if(n<0)
        cout<<n<<" is a negative number."<<endl;
    else if(n>0)
        cout<<n<<" is a positive number."<<endl;
    else
        cout<<"given number is zero"<<endl;
}
void check(char ch){
    if(ch>='a' && ch<='z')
        cout<<ch<<" character is a lowercase letter."<<endl;
    else
        cout<<ch<<" is character is an uppercase letter."<<endl;
}
void check(string arr,char ch){
    for(int i=0;i<arr.length();i++){
        if(arr[i]==ch){
            cout<<ch<<" found at position : "<<i<<endl;
        }
    }
}
int main(){
    int n;
    char ch1,ch2;
    string arr;
    cout<<"enter number : ";
    cin>>n;
    cout<<"enter a character you wanna check : ";
    cin>>ch1;
    cout<<"enter a string : ";
    cin>>arr;
    cout<<"enter a character you wanna search in string : ";
    cin>>ch2;
    check(n);
    check(ch1);
    check(arr,ch2);
    return 0;
}