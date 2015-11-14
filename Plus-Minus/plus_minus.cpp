#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arraySize, input;
    double zeroTotal, posTotal, negTotal = 0;
    cin >> arraySize;
    for (int i = 0; i < arraySize; i++) {
        cin >> input;
        if (input > 0) {
            posTotal += 1;
        }
        else {
            if (input < 0) {
            negTotal += 1;
            }
        else {
            zeroTotal += 1;
        }
        }
    }
    zeroTotal = zeroTotal / arraySize;
    posTotal = posTotal / arraySize;
    negTotal = negTotal / arraySize;
    cout << posTotal << endl;
    cout << negTotal << endl;
    cout << zeroTotal << endl;
    return 0;
}
