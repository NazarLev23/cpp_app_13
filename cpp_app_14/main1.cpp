#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Select:" << endl;
    cout << "1. All numbers" << endl;
    cout << "2. Even numbers" << endl;
    cout << "3. Odd numbers" << endl;
    cout << "4. Numbers /7" << endl;
    cout << "Your choice: ";
    cin >> c;

    switch (c) {
    case 1: {
        cout << "All numbers: ";
        for (int i = a; i <= b; i++) {
            cout << i << " ";
        }
        cout << endl;
        break;
    }
    case 2: {
        cout << "Even numbers: ";
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
        break;
    }
    case 3: {
        cout << "Odd numbers: ";
        for (int i = a; i <= b; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
        cout << endl;
        break;
    }
    case 4: {
        cout << "Numbers /7: ";
        for (int i = a; i <= b; i++) {
            if (i % 7 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
        break;
    }
    default: {
        cout << "Invalid choice." << endl;
        break;
    }
    }

    return 0;
}
