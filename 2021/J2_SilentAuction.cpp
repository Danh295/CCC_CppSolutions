#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, amt, hAmt;
    std::string nm, hNm;

    // init
    std::cin >> n;
    std::cin >> nm;
    std::cin >> amt;

    hNm = nm;
    hAmt = amt;

    // iterative input processing
    for(int i = 1; i < n; i++) {
        std::cin>>nm;
        std::cin>>amt;

        // condition for value update
        if(amt > hAmt)
        {
            hNm = nm;
            hAmt = amt;
        }
    }

    std::cout << hNm;

    return 0;
}