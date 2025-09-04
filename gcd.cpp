#include <iostream>
using namespace std;

// Recursive function to find GCD of two numbers
int gcd(int a, int b) {
    // TODO: complete the function as per instructions
    if (b == 0)          // Base case
        return a;
    else
        return gcd(b, a % b);  // Recursive call
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << "\n";

    return 0;
}

