#include <bits/stdc++.h>

int nDrops, x, y;
int main() {
    // fast io
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init vars
    char sep;
    int minX = 0, minY = 0, maxX = 0, maxY = 0;

    // init input
    std::cin >> nDrops;
    std::cin >> x >> sep >> y;

    // iterative input
    minX = x; minY = y; maxX = x; maxY = y;
    for (int i = 1; i < nDrops; i++) {
        std::cin >> x >> sep >> y;

        // conditionally update vars
        if (x < minX) minX = x;
        else if (x > maxX) maxX = x;
        if (y < minY) minY = y;
        else if (y > maxY) maxY = y;
    }

    // output one greater the largest coords, one less the smallest coords
    std::cout << minX - 1 << "," << minY - 1 << "\n" << maxX + 1 << "," << maxY + 1;
}