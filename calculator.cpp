// Simple Console Calculator
// --------------------------
// Performs basic arithmetic operations (+, -, *, /) between two numbers.
// Keeps running in a loop until the user chooses to exit.

#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

void showMenu() {
    cout << "\n===== Simple Calculator =====" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        showMenu();
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    cout << "Result: " << result << endl;
                    break;
                case 2:
                    result = subtract(num1, num2);
                    cout << "Result: " << result << endl;
                    break;
                case 3:
                    result = multiply(num1, num2);
                    cout << "Result: " << result << endl;
                    break;
                case 4:
                    result = divide(num1, num2);
                    if (num2 != 0)
                        cout << "Result: " << result << endl;
                    break;
            }
        } else if (choice == 5) {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
