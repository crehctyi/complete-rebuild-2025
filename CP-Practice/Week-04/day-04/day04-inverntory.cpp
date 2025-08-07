#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    string name;
    float price;
    int stock;

    Product(string n, float p, int s) {
        name = n;
        price = p;
        stock = s;
    }

    void print() {
        cout << name << " - $" << price << " (" << stock << " left)" << endl;
    }
};

int main() {
    vector<Product> inventory;

    inventory.push_back(Product("Apples", 0.99, 50));
    inventory.push_back(Product("Bananas", 0.59, 75));
    inventory.push_back(Product("Chips", 2.49, 30));

    cout << "Store Inventory:\n";
    for (Product p : inventory) {
        p.print();
    }

    return 0;
}