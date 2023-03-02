#include <iostream>

using namespace std;

int main() {
    int a, sum = 0;

    do {
        cout << "Enter a numbers: ";
        cin >> a;
        sum += a;
    } while (a != 0);

    cout << "Sum of numbers: " << sum;

    return 0;
}