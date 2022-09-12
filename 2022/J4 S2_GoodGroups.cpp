#include <bits/stdc++.h>

int X, Y, G, ans = 0;
std::unordered_map<std::string, std::vector<std::string>> tgt;
std::unordered_map<std::string, std::vector<std::string>> apt;
int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    int i, j;
    std::string n1, n2;

    std::cin >> X;
    for (i = 0; i < X; i++) {
        std::cin >> n1 >> n2;
        tgt[n1].push_back(n2);
        tgt[n2].push_back(n1);
    }

    std::cin >> Y;
    for (i = 0; i < Y; i++) {
        std::cin >> n1 >> n2;
        apt[n1].push_back(n2);
        apt[n2].push_back(n1);
    }

    std::cin >> G;
    std::string grp[3];
    for (i = 0; i < G; i++) {
        for (j = 0; j < 3; j++) std::cin >> grp[j];

        for (std::string n : grp) { // loop through group

            if (tgt.find(n) != tgt.end()) { // if name is part of constraint 
                for (std::string key : tgt[n]) { 
                    if (!(find(begin(grp), end(grp), key) != end(grp))) { // if group does not contain name's group mates
                        ans += 1;
                        tgt[key].erase(remove(tgt[key].begin(), tgt[key].end(), n), tgt[key].end()); // remove group mate's constraint to prevent triggering the same constraint twice
                    }
                }
            }

            if (apt.find(n) != apt.end()) { // if name is part of constrant
                for (std::string key : apt[n]) {
                    if (find(begin(grp), end(grp), key) != end(grp)) { // if group contains name's group mates
                        ans += 1;
                        apt[key].erase(remove(apt[key].begin(), apt[key].end(), n), apt[key].end()); // remove group mate's constraint to prevent triggering the same constraint twice
                    }
                }
            }
        }
    }

    std::cout << ans;
    return 0;
}