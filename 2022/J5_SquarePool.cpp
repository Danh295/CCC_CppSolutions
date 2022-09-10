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
    bounds.push_back(N + 1);

    // sort order of coordiantes from closest to 1,1
    sort(bounds.begin(), bounds.end());
    sort(trees.begin(), trees.end());

    int prev;
    for (auto x : bounds) { // iterate through the lengths in between the y values of the trees
        for (auto y : bounds) { // x should track the first (smaller) y value, while y tracks the second (greater) y value
            cout << "bound - x: " << x << "\t" << "bound - y: " << y << endl;
            if ( x >= y) continue; // if it's the same y value or if x value bound is lower, skip to the next y value

            prev = 0; // track the last valid x value
            for (auto t : trees) { // iterate through the tree coordinates
                cout << "tree coord: " << t.first << ", " << t.second << endl;
                if (t.second <= x || t.second >= y) continue; // if the tree's y value is less than or equal to the x bound, or if it's greater than or equal to the y bound, skip to the next tree coords (this means that there is a tree within the given bounds)

                cout << "maximum of: " << "(minimum of: " << y - x - 1 << ", " << t.first - prev - 1 << "), " << ans << endl;
                ans = max(min(y - x - 1, t.first - prev - 1), ans); // y - x - 1 gives the valid horizontal side length between the trees, t.first - prev - 1 gives the valid vertical side length 
                                                                    // between the trees. Take the minimum of the two values to get the side length of the valid square. Update the value of the 
                                                                    // answer if the minimum side length is greater than the current answer
                prev = t.first; // update the last x value
            }
            cout << "maximum of: " << "(minimum of: " << y - x - 1 << ", " << N - prev << "), " << ans << endl;
            ans = max(min(y - x - 1, N - prev), ans); // same as above, except the formula changes to N - prev
        }
    }

    cout << ans;
    return 0;
}