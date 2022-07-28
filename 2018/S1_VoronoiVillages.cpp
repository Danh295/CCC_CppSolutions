#include <bits/stdc++.h>

int main() {
    
    // INIT & INPUT

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, pos;
    double size, ans;

    std::cin >> n;
    int v[n];
    double midPts[n-1];

    for (int i = 0; i < n; i++) { 
        std::cin >> pos;
        v[i] = pos;
    }

    // PROCESS
    std::sort(v, v + n);
    for (int i = 0; i < n - 1; i++) midPts[i] = (v[i] + v[i + 1]) / 2.0; // get midpoints between the villages

    ans = midPts[1] - midPts[0];
    for (int i = 1; i < n - 2; i++) { // calculate & determine the smallest village using the midpoints
        size = midPts[i+1] - midPts[i];
        if (size < ans) ans = size;
    }

    // OUTPUT
    std::cout << std::fixed << std::setprecision(1) << ans;
}