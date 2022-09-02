#include <bits/stdc++.h>

std::unordered_map<int, int> mp; // map time to distance at each observation
std::vector<int> order; // keep the order of each observation

int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init vars
    int numObs, time, pos, t1, t2, i;
    double topSpd = 0, spd;

    // iterative input for positions of the sprinter
    for (std::cin >> numObs; numObs > 0; numObs--) {
        std::cin >> time >> pos;
        order.push_back(time);
        mp[time] = pos;
    }

    // sort order of observations in chronological order
    std::sort(order.begin(), order.end());

    // calculate speed at every interval
    for (i = 0; i < order.size()-1; i++) {
        t1 = order[i];
        t2 = order[i+1];
        spd = abs((double)(mp[t2] - mp[t1]) / (double)(t2 - t1));

        if (spd > topSpd) topSpd = spd; // check for top speed
    }

    std::cout << std::fixed << std::setprecision(1) << topSpd;
}