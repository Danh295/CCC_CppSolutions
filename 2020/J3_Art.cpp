#include <bits/stdc++.h>

using namespace std;

int nDrops, x, y;
int main() {
    char sep;
    int minX = 0, minY = 0, maxX = 0, maxY = 0;

    cin >> nDrops;
    cin >> x >> sep >> y;

    minX = x; minY = y; maxX = x; maxY = y;
    for (int i = 1; i < nDrops; i++) {
        cin >> x >> sep >> y;
        if (x < minX) minX = x;
        else if (x > maxX) maxX = x;
        if (y < minY) minY = y;
        else if (y > maxY) maxY = y;
    }

    cout << minX - 1 << "," << minY - 1 << "\n" << maxX + 1 << "," << maxY + 1;
}