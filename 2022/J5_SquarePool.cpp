#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> coords;
int nTrees;
int main() 
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // init
    cin >> nTrees;
    int x, y;
    pair<int, int> coord;
    for (int i = 0; i < nTrees; i++) {
        cin >> coord.first >> coord.second;
        coords.push_back(coord);
    }

    // recursively check for available squares

    return 0;
}