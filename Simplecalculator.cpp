#include <iostream>
using namespace std;

void Calculator() {
    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
}

void Operation(int choice) {
    double a, b, r;
    cout << "Enter first number: "; //Gets input for first number
    cin >> a;
    cout << "Enter second number: "; //Gets input for second number
    cin >> b;

    switch (choice) {
        case 1:
            r = a + b; //For addition
            cout << "Result: " << r << endl;
            break;
        case 2:
            r = a - b; //For subtraction
            cout << "Result: " << r << endl;
            break;
        case 3:
            r = a * b; //For multiplication
            cout << "Result: " << r << endl;
            break;
        case 4:
            if (b != 0) {
                r = a / b; //For division
                cout << "Result: " << r << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl; //Executes if denominator value is 0
            }
            break;
        default:
            cout << "Invalid choice!" << endl; //Executes if user enters invalid choice
    }
}

int main() {
    int choice;
    do {
        Calculator(); //calling function
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            Operation(choice); //calling function
        } else if (choice == 5) {
            cout << "Exiting the program. Goodbye!" << endl; //Exits the program
        } else {
            cout << "Invalid choice. Please try again." << endl; //Executes if user enters invalid choice
        }
    } while (choice != 5);

    return 0;
}