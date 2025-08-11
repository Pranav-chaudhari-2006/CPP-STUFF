#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;


void addition();
void subtraction();
void multiplication();
void division();
void modulusCalc();
void power();
void squareRoot();
void sineVal();
void cosineVal();
void tangentVal();
void logarithm();
void factorialCalc();

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n===== Advanced Calculator =====";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulus";
        cout << "\n6. Power";
        cout << "\n7. Square Root";
        cout << "\n8. Sine (degrees)";
        cout << "\n9. Cosine (degrees)";
        cout << "\n10. Tangent (degrees)";
        cout << "\n11. Logarithm (base e)";
        cout << "\n12. Factorial";
        cout << "\n13. Quit";
        cout << "\nSelect an option (1-13): ";
        cin >> choice;

        switch (choice) {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: modulusCalc(); break;
            case 6: power(); break;
            case 7: squareRoot(); break;
            case 8: sineVal(); break;
            case 9: cosineVal(); break;
            case 10: tangentVal(); break;
            case 11: logarithm(); break;
            case 12: factorialCalc(); break;
            case 13: 
                cout << "Exiting... Thanks for using the calculator!\n";
                running = false;
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}

void addition() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;
}

void subtraction() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Difference = " << a - b << endl;
}

void multiplication() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Product = " << a * b << endl;
}

void division() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b != 0)
        cout << "Quotient = " << a / b << endl;
    else
        cout << "Error: Division by zero not possible.\n";
}

void modulusCalc() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if (b != 0)
        cout << "Remainder = " << a % b << endl;
    else
        cout << "Error: Division by zero not possible.\n";
}

void power() {
    double base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << base << "^" << exp << " = " << pow(base, exp) << endl;
}

void squareRoot() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0)
        cout << "Square root = " << sqrt(num) << endl;
    else
        cout << "Error: Negative number entered.\n";
}

void sineVal() {
    double deg;
    cout << "Enter angle in degrees: ";
    cin >> deg;
    cout << "sin(" << deg << ") = " << sin(deg * M_PI / 180) << endl;
}

void cosineVal() {
    double deg;
    cout << "Enter angle in degrees: ";
    cin >> deg;
    cout << "cos(" << deg << ") = " << cos(deg * M_PI / 180) << endl;
}

void tangentVal() {
    double deg;
    cout << "Enter angle in degrees: ";
    cin >> deg;
    cout << "tan(" << deg << ") = " << tan(deg * M_PI / 180) << endl;
}

void logarithm() {
    double num;
    cout << "Enter number: ";
    cin >> num;
    if (num > 0)
        cout << "log(" << num << ") = " << log(num) << endl;
    else
        cout << "Error: Logarithm undefined for non-positive numbers.\n";
}

void factorialCalc() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: Factorial of negative number not possible.\n";
        return;
    }
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << n << "! = " << fact << endl;
}
