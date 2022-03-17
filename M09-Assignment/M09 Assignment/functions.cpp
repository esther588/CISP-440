#include "functions.h"
#include <iostream>
using namespace std;

int nthFIbonacci(int n) {
    if(n <= 10) {
        if (n <= 1) {
            return n;
        }
        return nthFIbonacci(n-1) + nthFIbonacci(n-2);
    }
    return -1;
}

void display(int input, int output) {
    cout << "Input: n = " << input << endl;
    cout << "Output: " << output << endl;
    if(input == 1) {
        cout << output << " is the " << input << "st number of fibonacci series." << endl;
    } else if(input == 2 || input == 3) {
        cout << output << " is the " << input << "nd number of fibonacci series." << endl;
    } else if(input == 3) {
        cout << output << " is the " << input << "rd number of fibonacci series." << endl;
    } else {
        cout << output << " is the " << input << "th number of fibonacci series." << endl;
    }
}
