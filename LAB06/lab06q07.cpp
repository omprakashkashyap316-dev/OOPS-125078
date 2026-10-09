#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    string productID;
    double unitPrice;
    int quantity;

public:
    InventoryItem(string id, double price, int qty)
        : productID(id), unitPrice(price), quantity(qty) {}

    InventoryItem operator+(const InventoryItem& other) const {
        if (productID == other.productID && unitPrice == other.unitPrice) {
            return InventoryItem(productID, unitPrice, quantity + other.quantity);
        } else {
            cout << "Error: Incompatible items! Product ID or Unit Price mismatch.\n";
            return *this;
        }
    }

    void display() const {
        cout << "ID: " << productID << " | Price: $" << unitPrice << " | Qty: " << quantity << "\n";
    }
};

int main() {
    InventoryItem item1("P101", 15.50, 10);
    InventoryItem item2("P101", 15.50, 20);
    InventoryItem item3("P102", 20.00, 5);

    cout << "Item 1: "; item1.display();
    cout << "Item 2: "; item2.display();

    InventoryItem combined = item1 + item2;
    cout << "Combined Item: "; combined.display();

    cout << "\nAttempting incompatible addition:\n";
    InventoryItem invalidCombined = item1 + item3;

    return 0;
}