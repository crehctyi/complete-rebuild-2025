#include <iostream>
using namespace std;

class Calculator {
private:
    float a, b;

public:
    Calculator(float x, float y) {
        a = x;
        b = y;
    }

    float add() {
        return a + b;
    }

    float subtract() {
        return a - b;
    }

    float multiply() {
        return a * b;
    }

    float divide() {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Calculator calc(num1, num2);

    cout << "Add: " << calc.add() << endl;
    cout << "Subtract: " << calc.subtract() << endl;
    cout << "Multiply: " << calc.multiply() << endl;
    cout << "Divide: " << calc.divide() << endl;

    return 0;
}
