// IMPORTANT: SUBMISSION FORMAT ON DMOJ REQUIRES OUTPUT TO END IN "\n" (whitespace: newline character)

#include <bits/stdc++.h>

using namespace std;

int sqr[4][4];
int main() 
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // init
    int total, sum, i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cin >> sqr[i][j];
        }
    }

    // init total using sum of first row
    total = 0;
    for (i = 0; i < 4; i++) total += sqr[0][i];

    // compare total to sum of other rows 
    for (i = 1; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) {
            sum += sqr[i][j];
        }

        if (sum != total) {
            cout << "not magic" << "\n";
            return 0;
        }
    }

    // compare total to sum of other columns
    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) {
            sum += sqr[j][i];
        }

        if (sum != total) {
            cout << "not magic" << "\n";
            return 0;
        }
    }

    cout << "magic" << "\n";

    return 0;
}