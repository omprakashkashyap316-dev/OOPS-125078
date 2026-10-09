#include <iostream>
using namespace std;
class Matrix {
private:
    int mat[2][2];
public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        mat[0][0] = a; mat[0][1] = b;
        mat[1][0] = c; mat[1][1] = d;
    }
    Matrix operator+(Matrix& other){
        return Matrix(
            mat[0][0] + other.mat[0][0], mat[0][1] + other.mat[0][1],
            mat[1][0] + other.mat[1][0], mat[1][1] + other.mat[1][1]
        );
    }
    void display(){
        cout << "[ " << mat[0][0] << " " << mat[0][1] << " ]\n";
        cout << "[ " << mat[1][0] << " " << mat[1][1] << " ]\n";
    }
};
int main() {
    Matrix m1(1, 2, 3, 4), m2(5, 6, 7, 8);
    Matrix sum = m1 + m2;
    cout << "Matrix 1:\n"; m1.display();
    cout << "Matrix 2:\n"; m2.display();
    cout << "Sum Matrix:\n";
    sum.display();
    return 0;
}