#include <iostream>
#include <string>


using namespace std;

int main() {
    int firstInput, secondInput, thirdInput;

    cin >> firstInput >> secondInput >> thirdInput;

    int testArray[] = {firstInput, secondInput, thirdInput};
    int testArraySize = sizeof(testArray)/sizeof(int);

    for (int i = 0; i < testArraySize; i++) {
        if (testArray[0] + testArray[i] == testArray[i+1]) {
            cout << testArray[0] <<  "+" << testArray[i] << "=" << testArray[i+1] << endl;
        }
        if (testArray[0] - testArray[i] == testArray[i+1]) {
            cout << testArray[0] <<  "-" << testArray[i] << "=" << testArray[i+1] << endl;
        }
        else if (testArray[0] == testArray[2]) {
            cout << testArray[0] <<  "=" << testArray[1] << "/" << testArray[2] << endl;
        }
        if (testArray[0] * testArray[i] == testArray[i+1]) {
            cout << testArray[0] <<  "*" << testArray[i] << "=" << testArray[i+1] << endl;
        }
        if (testArray[0] != 0) {
            if (testArray[0] / testArray[i] == testArray[i+1]) {
                cout << testArray[0] <<  "/" << testArray[i] << "=" << testArray[i+1] << endl;
            }
        }
        if (testArray[1] != 0) {
            if (testArray[1] / testArray[i] == testArray[2]) {
                cout << testArray[0] <<  "=" << testArray[1] << "/" << testArray[2] << endl;
            }
        }
    }
    return 0;
}
