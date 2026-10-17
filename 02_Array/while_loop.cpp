#include <iostream>
using namespace std;

int main() {
    int n = 1234;
    int sum = 0;

    while (n > 0) {
        int lastDigit = n % 10;   // Step 1: Aakhri digit nikalo (1234 % 10 = 4)
        sum = sum + lastDigit;    // Step 2: Purane sum me lastDigit jodo
        n = n / 10;               // Step 3: Aakhri digit hatao (1234 / 10 = 123)
    }

    cout << "sum of numbers: " << sum; 
    return 0;
}