#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char temp1, temp2;
    vector<char> pst;

    string expr;
    getline(cin, expr);

    for (char c : expr) {
        if (!isdigit(c)) pst.push_back(c);
        else {
            temp1 = pst.back();
            pst.pop_back();
            temp2 = pst.back();
            pst.pop_back();
        }
    }
}