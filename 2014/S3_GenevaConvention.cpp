#include <bits/stdc++.h>

int tests, ingr, car[100000];

int main() {
    for (std::cin >> tests; tests > 0; tests--) {
        
        std::cin >> ingr;
        for (int i = 0; i < ingr; i++) std::cin >> car[i];

        std::stack<int> stk;
        int expectingIngr = 1;

        for (int i = ingr - 1; i >= 0; i--) {

            stk.push(car[i]);
            while (!stk.empty() && stk.top() == expectingIngr) {
                stk.pop();
                expectingIngr += 1;
            }
        }

        if (expectingIngr > ingr) std::cout << "Y\n";
        else std::cout << "N\n";
    }
}