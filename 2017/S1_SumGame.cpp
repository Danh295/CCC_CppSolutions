#include <bits/stdc++.h>

using namespace std;

int N, K;
int main() {

    cin >> N;
    int count = 0, swft[N], sema[N];
    for (int i = 0; i < N; i++) cin >> swft[i];
    for (int i = 0; i < N; i++) cin >> sema[i];

    if (swft[0] == sema[0]) count = 1;
    for (int i = 1; i < N; i++) {
        swft[i] += swft[i-1];
        sema[i] += sema[i-1];

        if (swft[i] == sema[i] && i + 1 > count) count = i + 1;
    }

    cout << count;
}