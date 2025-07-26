#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int note100 = 0, note50 = 0, note20 = 0, note10 = 0;

    int choice = 1; // For switch control

    switch (choice) {
        case 1:
            note100 = amount / 100;
            amount = amount % 100;
            cout << "₹100 notes: " << note100 << endl;
        case 2:
            note50 = amount / 50;
            amount = amount % 50;
            cout << "₹50 notes : " << note50 << endl;
        case 3:
            note20 = amount / 20;
            amount = amount % 20;
            cout << "₹20 notes : " << note20 << endl;
        case 4:
            note10 = amount / 10;
            amount = amount % 10;
            cout << "₹10 note : " << note10 << endl;
            break;
        default:
            cout << "Invalid choice!";
    }

    
    return 0;
}

