#include <iostream>
using namespace std;

int main() {
    float temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if (temp > 30) {
        cout << "Warning: High temperature!\n";
    } else {
        cout << "Temperature normal\n";
    }

    return 0;
}
