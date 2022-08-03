#include <bits/stdc++.h>

using namespace std;

int numObs;
unordered_map<int, int> mp;
vector<int> order;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int time, pos, t1, t2, i;
    double topSpd = 0, spd;

    for (cin >> numObs; numObs > 0; numObs--) {
        cin >> time >> pos;
        order.push_back(time);
        mp[time] = pos;
    }

    sort(order.begin(), order.end());

    for (i = 0; i < order.size()-1; i++) {
        t1 = order[i];
        t2 = order[i+1];
        spd = abs((double)(mp[t2] - mp[t1]) / (double)(t2 - t1));

        if (spd > topSpd) topSpd = spd;
    }

    cout << fixed << setprecision(1) << topSpd;
}