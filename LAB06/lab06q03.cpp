#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    double price;
public:
    Book(string t, double p){
        title = t;
        price = p;
    }
    bool operator<(Book& other){
        if(price != other.price){
            return price<other.price;
        }
        return title < other.title;
    }
    void display(){
        cout<<"Title: "<<title<<" | Price: $"<<price<<endl;
    }
};
int main(){
    Book b1("C++ Primer", 45.50),b2("Algorithms", 45.50),b3("Design Patterns", 55.00);
    cout<<"Book 1: ";
    b1.display();
    cout<<"Book 2: ";
    b2.display();
    if(b2<b1)
        cout<<"Book 2 is smaller than Book 1."<<endl;
    else
        cout<<"Book 1 is smaller than Book 2."<<endl;
    return 0;
}