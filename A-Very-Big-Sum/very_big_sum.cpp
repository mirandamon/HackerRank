#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arraySize;
    cin >> arraySize;
    long input, total = 0;
    for (int i = 0; i < arraySize; i++) {
        cin >> input;
        total += input;
    }
    cout << total << endl;
    return 0;
}
