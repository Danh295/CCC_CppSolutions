#include <bits/stdc++.h>

using namespace std;

int tests, ingr, car[100000];

int main() {
    for (cin >> tests; tests > 0; tests--) {
        
        cin >> ingr;
        for (int i = 0; i < ingr; i++) cin >> car[i];

        stack<int> stk;
        int expectingIngr = 1;

        for (int i = ingr - 1; i >= 0; i--) {

            stk.push(car[i]);
            while (!stk.empty() && stk.top() == expectingIngr) {
                stk.pop();
                expectingIngr += 1;
            }
        }

        if (expectingIngr > ingr) cout << "Y\n";
        else cout << "N\n";
    }
}