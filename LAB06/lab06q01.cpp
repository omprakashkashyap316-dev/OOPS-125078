#include <iostream>
#include <cmath>
using namespace std;
int getGCD(int a,int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
class Fraction {
private:
    int numerator;
    int denominator;
    void simplify() {
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        int common = getGCD(abs(numerator), denominator);
        if (common != 0) {
            numerator /= common;
            denominator /= common;
        }
    }

public:
    Fraction(int num=0,int den=1){
        numerator = num;
        denominator = den;
        if (denominator == 0) {
            cout << "Error: Denominator cannot be zero. Setting to 1.\n";
            denominator = 1;
        }
        simplify();
    }
    Fraction operator+(Fraction& other){
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }
    Fraction operator-(Fraction& other){
        int num = numerator * other.denominator - other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }
    void display(){
        cout<<numerator<<"/"<<denominator<<"\n";
    }
};
int main(){
    Fraction f1(2, 4) , f2(1,6);
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    cout<<"Fraction 1: ";
    f1.display();
    cout<<"Fraction 2: ";
    f2.display();
    cout<<"Sum: ";
    sum.display();
    cout<<"Difference: ";
    diff.display();
    return 0;
}