#include <iostream>

using namespace std;

int main() {
    // INTITIALIZATION
    
    // fast i/o
    ios::sync_with_stdio(0);
    // can't tie I/O stream since question asks for input prompt

    int sumNum = 1;
    int firstTen[] = {9, 7, 8, 0, 9, 2, 1, 4, 1, 8};
    int lastThree[3];
    int one_three_sum = 0;

    // INPUT
    cout<<"Digit 11? ";
    cin>>lastThree[0];
    cout<<"Digit 12? ";
    cin>>lastThree[1];
    cout<<"Digit 13? ";
    cin>>lastThree[2];

    // PROCESS

    for (int i = 0; i < 10; i++) { // accumulate 1-3-sum of first 10 digits
        one_three_sum += firstTen[i] * sumNum;
        if (sumNum == 1) {
            sumNum = 3;
        } else {
            sumNum = 1;
        }
    }
    for (int i = 0; i < 3; i++) { // add 1-3-sum of the last 3 digits
        one_three_sum += lastThree[i] * sumNum;
        if (sumNum == 1) {
            sumNum = 3;
        } else {
            sumNum = 1;
        }
    }

    // OUTPUT
    cout<<one_three_sum;

    return 0;
}