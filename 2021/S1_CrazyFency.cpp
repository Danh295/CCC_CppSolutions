#include <bits/stdc++.h>

using namespace std;

int main() {

    // INITIALIZATION

    // fast i/o 
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;

    // INPUT
    cin>>N;

    int heights[N+1];
    int widths[N];

    // iterative input
    for (int i = 0; i < (N+1); i++) {
        cin>>heights[i];
    }

    // PROCESS
    double area = 0;
    for (int i = 0; i < N; i++) {
        cin>>widths[i];
        area += (heights[i] + heights[i+1]) / 2.0 * widths[i]; // calculate area of a trapezoid & increment to total area
    }

    //  OUTPUT
    cout<<setprecision(5)<<fixed<<area; // set pre-determined decimal places
}