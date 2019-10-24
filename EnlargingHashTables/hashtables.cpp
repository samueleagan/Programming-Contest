#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isNumberPrime (int number);
int findLowestPrime(int number);

int main() {

    int input;
    vector<int> inputVector;

    do {
        cin >> input;
        if (input != 0) {
            inputVector.push_back(input);
        }
    } while (input != 0);

    for (const int &i : inputVector) {
        int n = 2 * i;
        if (isNumberPrime(i)) {
            cout << findLowestPrime(n) << endl;
        }
        else if (!isNumberPrime(i)) {
            cout << findLowestPrime(n) << "(" << i << " is not prime)" << endl;
        }
    }

    return 0;
}

bool isNumberPrime (int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i < number; i++) {
        if ((number % i) == 0) {
            return false;
        }
    }

    return true;
}

int findLowestPrime(int number) {
    do {
        number += 1;
    } while (!isNumberPrime(number));
    return number;
}

// Test all odd numbers between 2 and 2^15
// Tried it, still didn't work....
// Must be with the way I'm finding the prime number
