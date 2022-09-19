#include <bits/stdc++.h>

const int MM = 1e5+5;
int nTgt, nApt, nGrps, ans = 0;
std::unordered_map<std::string, int> grps; // hashmap to store name -> group #
std::string tgt[MM][2], apt[MM][2];
int main() 
{
    // fast i/ostd::
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    std::cin >> nTgt;
    for (int i = 0; i < nTgt; i++) std::cin >> tgt[i][0] >> tgt[i][1]; // names that should be tgt

    std::cin >> nApt;
    for (int i = 0; i < nApt; i++) std::cin >> apt[i][0] >> apt[i][1]; // names that should be apart

    std::cin >> nGrps;
    std::string a, b, c;
    for (int i = 0; i < nGrps; i++) {
        cin >> a >> b >> c;
        grps[a] = grps[b] = grps[c] = i; // assign names -> group number
    }

    // iterate through conditions & increment violations when found
    for (int i = 0; i < nTgt; i++) {
        std::string a = tgt[i][0], b = tgt[i][1]; // get group number of condition's name
        if (grps[a] != grps[b]) ans += 1; // check if names aren't in the same group
    }

    for (int i = 0; i < nApt; i++) {
        std::string a = apt[i][0], b = apt[i][1]; // get group number of condition's name
        if (grps[a] == grps[b]) ans += 1; // check if names are in the same group
    }

    std::cout << ans;
    return 0;
}