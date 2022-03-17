#include <iostream>
#include <iomanip>
using namespace std;

char fanTester(bool M, bool H, bool O);

int main() {
    cout << setw(25) << "Fan Tester Logic" << endl;
    cout << "M" << setw(5) << "H" << setw(5)<< "O" << setw(11) << "(M^H)vO" << setw(16) << "MyObservation" << endl;
    char result0 = fanTester(true, true, true);
    cout << "T" << setw(5) << "T" << setw(5)<< "T" << setw(5)<< result0 << setw(10) << result0 << endl;
    char result1 = fanTester(true, true, false);
    cout << "T" << setw(5) << "T" << setw(5)<< "F" << setw(5)<< result1 << setw(10) << result1 << endl;
    char result2 = fanTester(true, false, true);
    cout << "T" << setw(5) << "F" << setw(5)<< "T" << setw(5)<< result2 << setw(10) << result2 << endl;
    char result3 = fanTester(true, false, false);
    cout << "T" << setw(5) << "F" << setw(5)<< "F" << setw(5)<< result3 << setw(10) << result3 << endl;
    char result4 = fanTester(false, true, true);
    cout << "F" << setw(5) << "T" << setw(5)<< "T" << setw(5)<< result4 << setw(10) << result4 << endl;
    char result5 = fanTester(false, true, false);
    cout << "F" << setw(5) << "T" << setw(5)<< "F" << setw(5)<< result5 << setw(10) << result5 << endl;
    char result6 = fanTester(false, false, true);
    cout << "F" << setw(5) << "F" << setw(5)<< "T" << setw(5)<< result6 << setw(10) << result6 << endl;
    char result7 = fanTester(false, false, false);
    cout << "F" << setw(5) << "F" << setw(5)<< "F" << setw(5)<< result7 << setw(10) << result7 << endl;
}

char fanTester(bool M, bool H, bool O) {
    char isOff = 'F';
    if((M && H) || O) {
        isOff = 'T';
    }
    return isOff;
}
