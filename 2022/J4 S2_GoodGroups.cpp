#include <bits/stdc++.h>

using namespace std;

const int MM = 1e5+5;
int nTgt, nApt, nGrps, ans = 0;
unordered_map<string, int> grps; // hashmap to store name -> group #
string tgt[MM][2], apt[MM][2];
int main() 
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // init
    cin >> nTgt;
    for (int i = 0; i < nTgt; i++) cin >> tgt[i][0] >> tgt[i][1]; // names that should be tgt

    cin >> nApt;
    for (int i = 0; i < nApt; i++) cin >> apt[i][0] >> apt[i][1]; // names that should be apart

    cin >> nGrps;
    string a, b, c;
    for (int i = 0; i < nGrps; i++) {
        cin >> a >> b >> c;
        grps[a] = grps[b] = grps[c] = i; // assign names -> group number
    }

    // iterate through conditions & increment violations when found
    for (int i = 0; i < nTgt; i++) {
        string a = tgt[i][0], b = tgt[i][1]; // get group number of condition's name
        if (grps[a] != grps[b]) ans += 1; // check if names aren't in the same group
    }

    for (int i = 0; i < nApt; i++) {
        string a = apt[i][0], b = apt[i][1]; // get group number of condition's name
        if (grps[a] == grps[b]) ans += 1; // check if names are in the same group
    }

    cout << ans;
    return 0;
}