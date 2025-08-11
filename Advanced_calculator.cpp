#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2;
    bool keepGoing = true;

    while (keepGoing) {
        cout << "\n=== My Simple Calculator ===";
        cout << "\n1. Add";
        cout << "\n2. Subtract";
        cout << "\n3. Multiply";
        cout << "\n4. Divide";
        cout << "\n5. Modulus";
        cout << "\n6. Power";
        cout << "\n7. Square Root";
        cout << "\n8. Quit";
        cout << "\nPick an option (1-8): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter 2 numbers: ";
                cin >> num1 >> num2;
                cout << "Sum = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Enter 2 numbers: ";
                cin >> num1 >> num2;
                cout << "Difference = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Enter 2 numbers: ";
                cin >> num1 >> num2;
                cout << "Product = " << num1 * num2 << endl;
                break;

            case 4:
                cout << "Enter 2 numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Quotient = " << num1 / num2 << endl;
                else
                    cout << "Oops! Division by zero not possible.\n";
                break;

            case 5: {
                int a, b;
                cout << "Enter 2 integers: ";
                cin >> a >> b;
                if (b != 0)
                    cout << "Remainder = " << a % b << endl;
                else
                    cout << "Oops! Division by zero not possible.\n";
                break;
            }

            case 6:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << num1 << "^" << num2 << " = " << pow(num1, num2) << endl;
                break;

            case 7:
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Square root = " << sqrt(num1) << endl;
                else
                    cout << "Sorry, can't do square root of negative numbers.\n";
                break;

            case 8:
                cout << "Bye! Thanks for using my calculator :)\n";
                keepGoing = false;
                break;

            default:
                cout << "Invalid choice. Try again!\n";
        }
    }

    return 0;
}
