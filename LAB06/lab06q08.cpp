#include <iostream>

using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double c = 0.0) : celsius(c) {}

    bool operator>(const Temperature& other) const {
        return celsius > other.celsius;
    }

    bool operator<(const Temperature& other) const {
        return celsius < other.celsius;
    }

    Temperature operator-() const {
        return Temperature(-celsius);
    }

    void display() const {
        cout << celsius << " deg C\n";
    }
};

int main() {
    Temperature t1(36.5);
    Temperature t2(22.0);

    cout << "Temp 1: "; t1.display();
    cout << "Temp 2: "; t2.display();

    cout << "t1 > t2: " << (t1 > t2 ? "True" : "False") << "\n";
    cout << "t1 < t2: " << (t1 < t2 ? "True" : "False") << "\n";

    Temperature t3 = -t1;
    cout << "Negated Temp 1: "; t3.display();

    return 0;
}