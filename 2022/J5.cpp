#include <bits/stdc++.h>

using namespace std;

vector<int> y_vals;
vector<pair<int, int>> trees;
int N, T, ans;
int main() 
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y;
    cin >> N >> T;
    for (int i = 0; i < T; i++) {
        cin >> x >> y;
        y_vals.push_back(y);
        trees.push_back({x, y});
    }

    sort(y_vals.begin(), y_vals.end());
    sort(trees.begin(), trees.end());

    int prev;
    for (int first : y_vals) {
        for (int second : y_vals) {
            if (first <= second) continue;

            prev = 0;
            for (auto t : trees) {
                if (t.second <= first || t.second >= second) continue;

                ans = max(min(second - first - 1, t.first - prev - 1), ans);
                prev = t.first;
            }

            ans = max(min(second - first - 1, N - prev), ans);
        }
    }

    cout << ans;

    return 0;
}