#include <bits/stdc++.h>

using namespace std;

string str, op1, op2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (true) {
        getline(cin, str);

        stack<string> stk;

        if (str == "0") break;

        for (int i = str.size() - 1; i >= 0; i--) {
            if (str[i] == ' ') continue;
            if (str[i] == '+' || str[i] == '-') {
                op1 = stk.top();
                stk.pop();
                op2 = stk.top();
                stk.pop();
                stk.push(op1 + " " + op2 + " " + str[i]);
            } else {
                stk.push(str.substr(i, 1));
            }
            cout << stk.top() << "\n";
        }
    }
}