/**********************************
 * Title : Roman Roulette
 * Author : Esther Cheng
 * Student ID : 1754368
 * Date : 01/15/2022
 * Version : Version 1.0
 * Description : This is program
 * handles the following processes
 * n > 0 people are initially arranged
 * in a circle, facing inwards, and
 * numbered from 1 to n clockwise.
 * Starting with person number 1,
 * until we get to person number k (k > 0),
 * who is promptly killed. We then proceed
 * to count a further k people in a clockwise
 * direction, starting with the person immediately
 * to the left of the victim (that is, the victim’s left).
 * That kth person is killed next, and so on,
 * until only one person remains.
***********************************/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, winner = 0;
    cout << "Please enter number of people and step: ";
    cin >> n >> k;
    vector<int> circle;
    for(int i = 0; i < n; i++) {
        circle.push_back(i);
    }
    int index = 0, counter = 0, numKilled = n - 1;
    bool isKilled = false;
    while(index < n) {
        if(circle[index] >= 0) {
            counter++;
            if(counter == k) {
                circle[index] = -1;
                counter = 0;
                cout << "killed " << index << endl;
                numKilled--;
                isKilled = true;
                if(numKilled == 0) {
                    break;
                }
            } else {
                isKilled = false;
            }
        }
        if(circle[index] >= 0) {
            cout << "finding live " << index << endl;
            winner = index + 1;
        }
        if(index == n - 1) {
            index = 0;
        } else {
            index++;
        }
        if(!isKilled) {
            cout << "incrementing to " << index << endl;
        }
    }
    cout << "survivor is #" << winner << endl;
}
