#include <bits/stdc++.h>

using namespace std;

int X, Y, G, ans = 0;
unordered_map<string, string> tgt;
unordered_map<string, string> apt;
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
        tgt[n1] = n2;
        tgt[n2] = n1;
    }

    cin >> Y;
    for (i = 0; i < Y; i++) {
        cin >> n1 >> n2;
        apt[n1] = n2;
        apt[n2] = n1;
    }

    cin >> G;
    string grps[G][3];
    for (i = 0; i < G; i++) {
        for (j = 0; j < 3; j++) {
            cin >> n1;
            grps[i][j] = n1;
        }
    }

    // loop through all groups, check for constraints
    string key;
    vector<string> visited;
    
    for (i = 0; i < G; i++) {
        for (j = 0; j < 3; j++) {
            key = grps[i][j];
            cout << "----- " << key << endl;

            if (tgt.empty() && apt.empty()) {
                cout << ans;
                return 0;
            }

            if (tgt.find(key) != tgt.end()) {
                cout << "tgt: " << key << "\tmust contain: " << tgt[key] << endl;
                cout << grps[i][0] << ", " << grps[i][1] << ", " << grps[i][2] << endl;
                if (j == 0) {
                    if (grps[i][1] != tgt[key] && grps[i][1] != tgt[key] && grps[i][2] != tgt[key] && grps[i][2] != tgt[key]) {
                        ans += 1;
                        tgt.erase(tgt[key]);
                        tgt.erase(key);
                        cout << "erased: " << tgt[key] << ", " << key << endl;
                    }
                }
                else if (j == 1) {
                    if (grps[i][0] != tgt[key] && grps[i][0] != tgt[key] && grps[i][2] != tgt[key] && grps[i][2] != tgt[key]) {
                        ans += 1;
                        tgt.erase(tgt[key]);
                        tgt.erase(key);
                        cout << "erased: " << tgt[key] << ", " << key << endl;
                    }
                }
                else if (j == 2) {
                    if (grps[i][0] != tgt[key] && grps[i][0] != tgt[key] && grps[i][1] != tgt[key] && grps[i][1] != tgt[key]) {
                        ans += 1;
                        tgt.erase(tgt[key]);
                        tgt.erase(key);
                        cout << "erased: " << tgt[key] << ", " << key << endl;
                    }
                }
            }
            if (apt.find(key) != apt.end()) {
                cout << "apt: " << key << "\tmust not contain: " << apt[key] << endl;
                if (j == 0) {
                    if (grps[i][1] == apt[key] || grps[i][1] == apt[key] || grps[i][2] == apt[key] || grps[i][2] == apt[key]) {
                        ans += 1;
                        apt.erase(apt[key]);
                        apt.erase(key);
                        cout << "erased: " << apt[key] << ", " << key << endl;
                    }
                }
                else if (j == 1) {
                    if (grps[i][0] == apt[key] || grps[i][0] == apt[key] || grps[i][2] == apt[key] || grps[i][2] == apt[key]) {
                        ans += 1;
                        apt.erase(apt[key]);
                        apt.erase(key);
                        cout << "erased: " << apt[key] << ", " << key << endl;
                    }
                }
                else if (j == 2) {
                    if (grps[i][0] == apt[key] || grps[i][0] == apt[key] || grps[i][1] == apt[key] || grps[i][1] == apt[key]) {
                        ans += 1;
                        apt.erase(apt[key]);
                        apt.erase(key);
                        cout << "erased: " << apt[key] << ", " << key << endl;
                    }
                }
            }
            cout << "violations: " << ans << endl;
        }
    }

    cout << ans;

    return 0;
}