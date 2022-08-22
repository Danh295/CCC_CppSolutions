#include <bits/stdc++.h>

int main() {

    // fast i/o 
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // init vars
    int N;
    std::cin>>N;

    int heights[N+1];
    int widths[N];

    // iterative input
    for (int i = 0; i < (N+1); i++) {
        std::cin >> heights[i];
    }

    double area = 0;
    for (int i = 0; i < N; i++) {
        std::cin >> widths[i];
        area += (heights[i] + heights[i+1]) / 2.0 * widths[i]; // calculate area of a trapezoid & increment to total area
    }

    std::cout << std::setprecision(5) << std::fixed << area; 
}