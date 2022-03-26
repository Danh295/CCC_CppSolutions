#include <iostream>

using namespace std;

int main() {
    // INITILIZATION
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int reg, small;

    // INPUT
    cin>>reg>>small;

    // OUTPUT
    cout<<(3*small + 8*reg) - 28;
}