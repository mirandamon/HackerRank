#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test_cases, array_size, minimum, input;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++){
        cin >> array_size >> minimum;
        int total = 0;
        for (int j = 0; j < array_size; j++){
            cin >> input;
            if (input <= 0)
                total++;
        }
        if (total >= minimum)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
    return 0;
}
