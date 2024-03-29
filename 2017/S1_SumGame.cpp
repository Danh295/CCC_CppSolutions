#include <bits/stdc++.h>

int N, K;
int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    std::cin >> N;
    int count = 0, swft[N], sema[N];
    for (int i = 0; i < N; i++) std::cin >> swft[i];
    for (int i = 0; i < N; i++) std::cin >> sema[i];

    if (swft[0] == sema[0]) count = 1;
    for (int i = 1; i < N; i++) {
        swft[i] += swft[i-1];
        sema[i] += sema[i-1];

        if (swft[i] == sema[i] && i + 1 > count) count = i + 1;
    }

    std::cout << count;
}