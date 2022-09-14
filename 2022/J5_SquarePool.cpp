#include <bits/stdc++.h>

using namespace std;

vector<int> y_vals = {0};
vector<pair<int, int>> trees;
int N, T, ans = 0;
int main() 
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // init
    int x, y;
    cin >> N >> T;
    for (int i = 0; i < T; i++) {
        cin >> x >> y;
        y_vals.push_back(y);
        trees.push_back({x, y});
    }
    y_vals.push_back(N + 1);

    // sort values to help iteration begin from the smallest value
    sort(y_vals.begin(), y_vals.end());
    sort(trees.begin(), trees.end());

    int prev;
    for (int first : y_vals) { // iterate through the lengths in between the y values of the trees
        for (int second : y_vals) { // x should track the first (smaller) y value, while y tracks the second (greater) y value
            if (first >= second) continue; // if it's the same y value or if x value bound is lower, skip to the next y value

            prev = 0; // track the last valid x value
            for (auto t : trees) { // iterate through the tree coordinates
                if (t.second <= first || t.second >= second) continue; // if the tree's y value is less than or equal to the x bound, or if it's greater than or equal to the y bound, skip to the next tree coords (this means that there is a tree within the given bounds)

                ans = max(min(second - first - 1, t.first - prev - 1), ans); // y - x - 1 gives the valid horizontal side length between the trees, t.first - prev - 1 gives the valid vertical side length 
                                                                             // between the trees. Take the minimum of the two values to get the side length of the valid square. Update the value of the 
                                                                             // answer if the minimum side length is greater than the current answer
                prev = t.first; // update the last x value
            }
            ans = max(min(second - first - 1, N - prev), ans); // same as above, except the formula changes to N - prev
        }
    }

    cout << ans;

    return 0;
}