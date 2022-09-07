#include <bits/stdc++.h>

using namespace std;

int X, Y, G, ans = 0;
unordered_map<string, vector<string>> tgt;
unordered_map<string, vector<string>> apt;
int main()
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // init
    int i, j;
    string n1, n2;

    cin >> X;
    for (i = 0; i < X; i++) {
        cin >> n1 >> n2;
        tgt[n1].push_back(n2);
        tgt[n2].push_back(n1);
    }

    cin >> Y;
    for (i = 0; i < Y; i++) {
        cin >> n1 >> n2;
        apt[n1].push_back(n2);
        apt[n2].push_back(n1);
    }

    cin >> G;
    string grp[3];
    for (i = 0; i < G; i++) {
        for (j = 0; j < 3; j++) cin >> grp[j];

        for (string n : grp) { // loop through group

            if (tgt.find(n) != tgt.end()) { // if name is part of constraint 
                for (string key : tgt[n]) { 
                    if (!(find(begin(grp), end(grp), key) != end(grp))) { // if group does not contain name's group mates
                        ans += 1;
                        tgt[key].erase(remove(tgt[key].begin(), tgt[key].end(), n), tgt[key].end()); // remove group mate's constraint to prevent triggering the same constraint twice
                    }
                }
            }

            if (apt.find(n) != apt.end()) { // if name is part of constrant
                for (string key : apt[n]) {
                    if (find(begin(grp), end(grp), key) != end(grp)) { // if group contains name's group mates
                        ans += 1;
                        apt[key].erase(remove(apt[key].begin(), apt[key].end(), n), apt[key].end()); // remove group mate's constraint to prevent triggering the same constraint twice
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}