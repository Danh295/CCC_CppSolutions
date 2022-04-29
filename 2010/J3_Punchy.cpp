// NOT FULLY IMPLEMENTED doesnt work rn
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a = 0;
    int b = 0;
    int inst;

    string inp1;
    string inp2;

    cin >> inst;
    while(inst != 7) {
        cin >> inp1 >> inp2;

        if (inst == 1) {
            if (inp1 == "A") {
                a = stoi(inp2);
            } else if (inp1 == "B") {
                b = stoi(inp2);
            }
        } else if (inst == 2) {
            if (inp1 == "A") {
                cout << a;
            } else if (inp2 == "B") {
                cout << b;
            }
        } else if (inst == 3) {
            if (inp1 == "A") {
                a = a + b;
            } else if (inp1 == "B") {
                b = b + a;
            }
        } else if (inst == 4) {
            if (inp1 == "A") {
                a = a * b;
            } else if (inp1 == "B") {
                b = b * a;
            }
        } else if (inst == 5) {
            if (inp1 == "A") {
                a = a - b;
            } else if (inp1 == "B") {
                b = b - a;
            }
        } else if (inst == 6) {
            if (inp1 == "A") {
                a = a / b;
            } else if (inp1 == "B") {
                b = b / a;
            }
        }
    }

    return 0;
}