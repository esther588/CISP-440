#include "functions.h"
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    int result = nthFIbonacci(num);
    display(num, result);
}
