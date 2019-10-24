#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

int main() {

    int a, b, result, intIn;
    char sign;
    vector<string> stringVector;

    ifstream file;
    file.open("test.txt");

    while(!file.eof()){
        file >> intIn;
        stringVector.push_back(intIn);
    }

    switch(sign) {
        case '+': result = a + b; break;
        case '*': result = a * b; break;
        case '^': result = pow(a,b); break;
    }
}
