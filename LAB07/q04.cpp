#include<iostream>
using namespace std;
class LibraryAccess{
protected:
    int book;
public:
    LibraryAccess(int b){
        book = b;
    }
};
class LaboratoryAccess {
protected:
    int pending;
public:
    LaboratoryAccess(int p){
        pending = p;
    }
};
class StudentAccess : public LaboratoryAccess, public LibraryAccess{
public:
    StudentAccess(int b,int p) : LibraryAccess(b),LaboratoryAccess(p){}
    void display(){
        cout<<"Books Borrowed: "<<book<<endl;
        cout<<"Pending Lab Submissions: "<<pending<<endl;
        if(book <= 5 && pending == 0)
            cout<<"Full Resource Access Granted"<<endl;
        else
            cout<<"Full Resource Access Denied"<<endl;
    }
};
int main() {
    StudentAccess s(1, 0);
    s.display();
    return 0;
}