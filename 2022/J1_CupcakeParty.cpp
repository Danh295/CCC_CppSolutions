#include <iostream>

int main() {
    // INITILIZATION
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int reg, small;

    // INPUT
    std::cin>>reg>>small;

    // OUTPUT
    std::cout<<(3*small + 8*reg) - 28;
}