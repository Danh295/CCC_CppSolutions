#include <bits/stdc++.h>

using namespace std;

const int MAX = 5e5 + 2;

int N, T, ans = 0;
vector<int> bounds = {0}; // keeps track of boundaries
vector<pair<int, int>> trees;
int main() 
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // init
    cin >> N >> T;

    int x, y;
    for (int i = 0; i < T; i++) {
        cin >> x >> y;
        bounds.push_back(y);
        trees.push_back({x, y});
    }

    // sort order of coordiantes from closest to 1,1
    sort(bounds.begin(), bounds.end());
    sort(trees.begin(), trees.end());

    int prev;
    for (auto x : bounds) {
        for (auto y : bounds) {
            
            if ( x >= y) continue;

            prev = 0;
            for (auto t : trees) {
                if (t.second <= x || t.second >= y) continue;

                ans = max(min(y - x - 1, t.first - prev - 1), ans);
                prev = t.first;
            }
            ans = max(min(y - x - 1, N - prev), ans);
        }
    }

    cout << ans;
    return 0;
}