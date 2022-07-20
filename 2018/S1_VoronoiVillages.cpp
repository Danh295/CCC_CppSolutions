#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, pos;
    double size, ans;

    cin >> n;
    int v[n];
    double sizes[n-1];

    for (int i = 0; i < n; i++) {
        cin >> pos;
        v[i] = pos;
    }

    sort(v, v + n);
    for (int i = 0; i < n - 1; i++) sizes[i] = (v[i] + v[i + 1]) / 2.0;

    ans = sizes[1] - sizes[0];
    for (int i = 1; i < n - 2; i++) {
        size = sizes[i+1] - sizes[i];
        if (size < ans) ans = size;
    }

    cout << fixed << setprecision(1) << ans;
}