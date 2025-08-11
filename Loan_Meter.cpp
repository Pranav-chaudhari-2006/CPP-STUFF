#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\n=== Loan App ===";
        cout << "\n1. Gold Loan";
        cout << "\n2. Personal Loan";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            double goldWeight;
            double pricePerGram = 6000;
            double loanValue, interestRate = 7.5;
            double time;

            cout << "\nEnter gold weight (grams): ";
            cin >> goldWeight;

            if (goldWeight < 10) {
                cout << "Not eligible. Need at least 10 grams.\n";
                continue;
            }

            cout << "Enter time (in years): ";
            cin >> time;

            loanValue = goldWeight * pricePerGram * 0.75;
            double interest = (loanValue * interestRate * time) / 100;

            cout << fixed << setprecision(2);
            cout << "\nLoan Amount: " << loanValue;
            cout << "\nInterest: " << interest;
            cout << "\nTotal to Pay: " << loanValue + interest << "\n";
        }
        else if (choice == 2) {
            double monthlyIncome;
            double loanAmount;
            double interestRate = 10.5;
            double time;

            cout << "\nEnter monthly income: ";
            cin >> monthlyIncome;

            if (monthlyIncome < 15000) {
                cout << "Not eligible. Need at least Rs. 15000 income.\n";
                continue;
            }

            cout << "Enter loan amount: ";
            cin >> loanAmount;
            cout << "Enter time (in years): ";
            cin >> time;

            double interest = (loanAmount * interestRate * time) / 100;

            cout << fixed << setprecision(2);
            cout << "\nLoan Approved: " << loanAmount;
            cout << "\nInterest: " << interest;
            cout << "\nTotal to Pay: " << loanAmount + interest << "\n";
        }
        else if (choice == 3) {
            cout << "Thank you for using Loan App!\n";
            running = false;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
