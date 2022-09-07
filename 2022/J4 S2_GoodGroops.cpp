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
        cout << "added: " << n1 << " : ";
        for (j = 0; j < tgt[n1].size(); j++) cout << tgt[n1][j] << " ";
        cout << endl;

        tgt[n2].push_back(n1);
        cout << "added: " << n2 << " : ";
        for (j = 0; j < tgt[n2].size(); j++) cout << tgt[n2][j] << " ";
        cout << endl;
    }

    cin >> Y;
    for (i = 0; i < Y; i++) {
        cin >> n1 >> n2;
        apt[n1].push_back(n2);
        cout << "added: " << n1 << " : ";
        for (j = 0; j < apt[n1].size(); j++) cout << apt[n1][j] << " ";
        cout << endl;

        apt[n2].push_back(n1);
        cout << "added: " << n2 << " : ";
        for (j = 0; j < apt[n2].size(); j++) cout << apt[n2][j] << " ";
        cout << endl;
    }

    cin >> G;
    string grp[3];
    for (i = 0; i < G; i++) {
        for (j = 0; j < 3; j++) cin >> grp[j];

        for (string n : grp) { // loop through curr group

            if (tgt.find(n) != tgt.end()) { // if curr name is part of a constraint for 2 ppl to be together
                for (string key : tgt[n]) { 
                    cout << "tgt: " << n << "\t" << key << endl;
                    if (!(find(begin(grp), end(grp), key) != end(grp))) { // if group does not contain the curr name's group mates
                        ans += 1;
                        tgt[key].erase(remove(tgt[key].begin(), tgt[key].end(), n), tgt[key].end()); // remove group mate's constraint to prevent triggering the same constraint twice
                        cout << "erase: " << n << " from " << key << endl;
                    }
                }
            }

            if (apt.find(n) != apt.end()) { // if curr name is part of a constrant for 2 ppl to be apart
                for (string key : apt[n]) {
                    cout << "apt: " << n << "\t" << key << endl;
                    if (find(begin(grp), end(grp), key) != end(grp)) { // if group contains the curr name's group mates
                        ans += 1;
                        apt[key].erase(remove(apt[key].begin(), apt[key].end(), n), apt[key].end()); // remove group mate's constraint to prevent triggering the same constraint twice
                        cout << "erase: " << key << endl;
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}

//     // loop through all groups, check for constraints
//     string key;
//     vector<string> visited;
    
//     for (i = 0; i < G; i++) {
//         for (j = 0; j < 3; j++) {
//             key = grps[i][j];
//             cout << "----- " << key << endl;

//             if (tgt.empty() && apt.empty()) {
//                 cout << ans;
//                 return 0;
//             }

//             if (tgt.find(key) != tgt.end()) {
//                 cout << "tgt: " << key << "\tmust contain: " << tgt[key] << endl;
//                 cout << grps[i][0] << ", " << grps[i][1] << ", " << grps[i][2] << endl;
//                 if (j == 0) {
//                     if (grps[i][1] != tgt[key] && grps[i][1] != tgt[key] && grps[i][2] != tgt[key] && grps[i][2] != tgt[key]) {
//                         ans += 1;
//                         tgt.erase(tgt[key]);
//                         tgt.erase(key);
//                         cout << "erased: " << tgt[key] << ", " << key << endl;
//                     }
//                 }
//                 else if (j == 1) {
//                     if (grps[i][0] != tgt[key] && grps[i][0] != tgt[key] && grps[i][2] != tgt[key] && grps[i][2] != tgt[key]) {
//                         ans += 1;
//                         tgt.erase(tgt[key]);
//                         tgt.erase(key);
//                         cout << "erased: " << tgt[key] << ", " << key << endl;
//                     }
//                 }
//                 else if (j == 2) {
//                     if (grps[i][0] != tgt[key] && grps[i][0] != tgt[key] && grps[i][1] != tgt[key] && grps[i][1] != tgt[key]) {
//                         ans += 1;
//                         tgt.erase(tgt[key]);
//                         tgt.erase(key);
//                         cout << "erased: " << tgt[key] << ", " << key << endl;
//                     }
//                 }
//             }
//             if (apt.find(key) != apt.end()) {
//                 cout << "apt: " << key << "\tmust not contain: " << apt[key] << endl;
//                 if (j == 0) {
//                     if (grps[i][1] == apt[key] || grps[i][1] == apt[key] || grps[i][2] == apt[key] || grps[i][2] == apt[key]) {
//                         ans += 1;
//                         apt.erase(apt[key]);
//                         apt.erase(key);
//                         cout << "erased: " << apt[key] << ", " << key << endl;
//                     }
//                 }
//                 else if (j == 1) {
//                     if (grps[i][0] == apt[key] || grps[i][0] == apt[key] || grps[i][2] == apt[key] || grps[i][2] == apt[key]) {
//                         ans += 1;
//                         apt.erase(apt[key]);
//                         apt.erase(key);
//                         cout << "erased: " << apt[key] << ", " << key << endl;
//                     }
//                 }
//                 else if (j == 2) {
//                     if (grps[i][0] == apt[key] || grps[i][0] == apt[key] || grps[i][1] == apt[key] || grps[i][1] == apt[key]) {
//                         ans += 1;
//                         apt.erase(apt[key]);
//                         apt.erase(key);
//                         cout << "erased: " << apt[key] << ", " << key << endl;
//                     }
//                 }
//             }
//             cout << "violations: " << ans << endl;
//         }
//     }

//     cout << ans;

//     return 0;
// }