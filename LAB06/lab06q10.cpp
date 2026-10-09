#include <iostream>
using namespace std;
class Bill {
private:
    int item_count;
    double total_amount;

public:
    Bill(int items = 0, double amount = 0.0){
        item_count = items;
        total_amount = amount;
    }
    Bill operator+(const Bill& other) const {
        return Bill(item_count + other.item_count, total_amount + other.total_amount);
    }
    bool operator>(const Bill& other) const {
        return total_amount > other.total_amount;
    }
    void display() const {
        cout << "Items: " << item_count << " | Total Amount: $" << total_amount << "\n";
    }
};
int main() {
    Bill bill1(3, 150.50), bill2(5, 220.00);
    Bill totalBill = bill1 + bill2;
    cout << "Bill 1: "; bill1.display();
    cout << "Bill 2: "; bill2.display();
    cout << "Combined Bill: "; totalBill.display();
    if (bill2 > bill1) {
        cout << "Bill 2 has a higher total amount than Bill 1.\n";
    } else {
        cout << "Bill 1 has a higher total amount than Bill 2.\n";
    }
    return 0;
}