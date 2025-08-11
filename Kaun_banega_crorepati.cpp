#include <iostream>
#include <string>
#include<cctype>
using namespace std;

struct Question {
    string question;
    string options[4];
    char correctOption; 
};

int main() {
    Question questions[15] = {                                                                 //Storing Entries
        {"What is the size of int in most 32-bit systems?",
         {"A) 2 bytes", "B) 4 bytes", "C) 8 bytes", "D) Depends on compiler"},
         'B'},

        {"Which symbol is used for single-line comments in C++?",
         {"A) /* */", "B) //", "C) <!-- -->", "D) #"},
         'B'},

        {"Which header file is needed for using cout?",
         {"A) iostream", "B) stdio.h", "C) conio.h", "D) cstdlib"},
         'A'},

        {"What does 'new' keyword do in C++?",
         {"A) Deletes memory", "B) Allocates memory", "C) Initializes variable", "D) None"},
         'B'},

        {"Which OOP principle binds data and methods together?",
         {"A) Polymorphism", "B) Encapsulation", "C) Inheritance", "D) Abstraction"},
         'B'},

        {"Which container is part of Standard Template Library (STL)?",
         {"A) Array", "B) vector", "C) struct", "D) typedef"},
         'B'},

        {"What is the output of: int x=5; cout<<++x; ?",
         {"A) 5", "B) 6", "C) Error", "D) Undefined"},
         'B'},

        {"Which type of inheritance allows multiple base classes?",
         {"A) Single", "B) Multiple", "C) Multilevel", "D) Hierarchical"},
         'B'},

        {"Which keyword prevents a class from being inherited?",
         {"A) const", "B) private", "C) final", "D) virtual"},
         'C'},

        {"What will happen if a constructor is declared private?",
         {"A) Can't create object outside class", "B) Error", "C) Nothing", "D) Destructor won't work"},
         'A'},

        {"Which feature allows same function name with different parameters?",
         {"A) Overloading", "B) Overriding", "C) Virtual", "D) Constructor"},
         'A'},

        {"Which is not a smart pointer in C++11?",
         {"A) unique_ptr", "B) shared_ptr", "C) auto_ptr", "D) dynamic_ptr"},
         'D'},

        {"Which mechanism is used to handle exceptions?",
         {"A) try-catch", "B) if-else", "C) switch", "D) loops"},
         'A'},

        {"Which function releases dynamically allocated memory?",
         {"A) delete", "B) free()", "C) remove()", "D) erase()"},
         'A'},

        {"Which feature allows a base class pointer to call derived class function?",
         {"A) Virtual functions", "B) Templates", "C) Inline functions", "D) Static binding"},
         'A'}
    };

    int money[15] = {1000, 2000, 3000, 5000, 10000,
                     20000, 40000, 80000, 160000, 320000,
                     640000, 1250000, 2500000, 5000000, 10000000};

    int totalWon = 0;

    // Game loop:ask, read answer, check

    for (int i = 0; i < 15; ++i) {
        cout << "\nQ" << i + 1 << ": " << questions[i].question << endl;
        for (int j = 0; j < 4; ++j) {                                                    
            cout << questions[i].options[j] << endl;
        }

        cout << "Your answer (A/B/C/D) : ";
        char ans;
        cin >> ans;

        ans= toupper(ans);

        if (ans == questions[i].correctOption) {
            totalWon = money[i];
            cout << "Correct! You have won Rs. " << totalWon << ".\n";
        } 
        
        else {
            cout << "Wrong! The correct answer was " << questions[i].correctOption << ".\n";

            //rules: after Q5 and Q10 some safe amounts
            
            if (i >= 10) cout << "You take home Rs. 320000\n";
            else if (i >= 5) cout << "You take home Rs. 10000\n";
            else cout << "You take home Rs. 0\n";
            break;                                                                                //End game if answered wrong
        }

        if (i == 14) {
            cout << "Congratulations! You answered all questions and won Rs. " << totalWon << "!\n";
        }
    }

    return 0;
}
