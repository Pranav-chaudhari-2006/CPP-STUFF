#include <iostream>
#include <string>
using namespace std;

struct Participant {
    string name;
    string email;
    string event;
};

int main() {
    Participant p[100];
    int total = 0;
    int choice;
    bool run = true;

    while (run) {
        cout << "\n--- Event Registration ---";
        cout << "\n1. Add participant";
        cout << "\n2. View all";
        cout << "\n3. Search by name";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter name: ";
            getline(cin, p[total].name);
            cout << "Enter email: ";
            getline(cin, p[total].email);
            cout << "Enter event: ";
            getline(cin, p[total].event);
            total++;
            cout << "Participant added!\n";
        }
        else if (choice == 2) {
            if (total == 0) cout << "No participants yet.\n";
            else {
                for (int i = 0; i < total; i++) {
                    cout << i+1 << ". " << p[i].name << " | " << p[i].email << " | " << p[i].event << endl;
                }
            }
        }
        else if (choice == 3) {
            string searchName;
            cout << "Enter name to search: ";
            getline(cin, searchName);
            bool found = false;
            for (int i = 0; i < total; i++) {
                if (p[i].name == searchName) {
                    cout << "Found: " << p[i].name << " | " << p[i].email << " | " << p[i].event << endl;
                    found = true;
                }
            }
            if (!found) cout << "Not found.\n";
        }
        else if (choice == 4) {
            run = false;
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }
    }
}
