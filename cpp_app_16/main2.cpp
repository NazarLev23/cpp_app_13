#include <iostream>

using namespace std;

int main() {
    int a, b, sum = 0;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << "Sum of numbers: " << sum;

    return 0;
}
