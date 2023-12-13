#include <iostream>
#include "TList.h"
#include "TPolinom.h"
using namespace std;


void PrintMenu() {
    cout << "Menu:\n";
    cout << "1. Enter polinom\n";
    cout << "2. Print polinom\n";
    cout << "3. Add Polinom\n";
    cout << "4. Mult polinom by a const\n";
    cout << "5. Exit\n";
    cout << "Select an option: ";
}


TPolinom ReadPolinom() {
    cout << "Enter polinom here: ";
    string str;
    getline(cin, str);
    return TPolinom(str);
}


int main()
{
    TPolinom p1, p2, result;
    int choice;
    double coef;
    while (true) {
        PrintMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
        case 1:
            p1 = ReadPolinom();
            break;
        case 2:
            cout << "Polinom: " << p1.ToString() << endl;
            break;
        case 3:
            cout << "Enter the second polynomial for addition:\n";
            p2 = ReadPolinom();
            result = p1 + p2;
            cout << "Result of adding: " << result.ToString() << endl;
            break;
        case 4:
            cout << "Enter a constant for multiplication: ";
            cin >> coef;
            result = p1 * coef;
            cout << "Result of multiply: " << result.ToString() << endl;
            break;
        case 5:
            cout << "Exit" << endl;
            return 0;
        default:
            cout << "Wrong choice. Try again.\n";
        }
    }
}