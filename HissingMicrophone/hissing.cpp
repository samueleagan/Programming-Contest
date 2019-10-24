#include <iostream>
#include <string>

using namespace std;

bool isThereAHiss(string input);

int main() {

    string input;

    cin >> input;

    if (isThereAHiss(input)) {
        cout << "hiss" << endl;
    }
    else {
        cout << "no hiss" << endl;
    }

    return 0;
}

bool isThereAHiss(string input) {
    int inputSize = input.size();
    for (int i = 0; i < inputSize; i++) {
        char currentChar = input[i];
        if ((input[i] == currentChar) && (input[i + 1] == currentChar)) {
            return true;
        }
    }
    return false;
}
