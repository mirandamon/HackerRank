#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int height;
    cin >> height;
    for (int i = 0; i < height; i++) {
        for (int j = 1; j <= height; j++) {
            if (j < height - i){
                cout << " ";
            }
            else
                cout << "#";
        }
        cout << endl;
    }
    return 0;
}

