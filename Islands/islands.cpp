#include <iostream>
#include <string>


using namespace std;

int main() {

    int r, c;

    cin >> r >> c;

    do {
        int tableSize = r * c;
        char table [tableSize];

        for (int i = 0; i < tableSize; i++) {
            cin >> table[i];
        }
        
        cin >> r >> c;
    } while((r != 0) || (c != 0));








    return 0;
}
