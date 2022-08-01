#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (true) {
        string str, op1, op2;
        getline(cin, str);

        stack<string> stk;

        for (int i = str.size() - 1; i >= 0; i--) {
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