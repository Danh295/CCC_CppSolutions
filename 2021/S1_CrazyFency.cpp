#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;

    cin>>N;

    int heights[N+1];
    int widths[N];
    
    for (int i = 0; i < (N+1); i++) {
        cin>>heights[i];
    }

    double area = 0;
    for (int i = 0; i < N; i++) {
        cin>>widths[i];
        area += (heights[i] + heights[i+1]) / 2.0 * widths[i];
    }

    cout<<setprecision(5)<<fixed<<area;

}