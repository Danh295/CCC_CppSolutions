#include <iostream>
#include <map>

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    // init
    int n;
    std::string names1[31];
    std::string names2[31];
    std::map<std::string, std::string> pairs;
    bool good = true;

    std::cin >> n;
    
    for (int i = 0; i < n; i++) std::cin >> names1[i];
    for (int i = 0; i < n; i++) std::cin >> names2[i];
    
    for (int i = 0; i < n; i++) pairs[names1[i]] == names2[i];

    for (int i = 0; i < n; i++) {
        if (pairs[names1[i]] == names1[i]) good = false;
        if (pairs[names1[i]] == names2[i] && pairs[names2[i]] == names1[i]) continue;
        
        good = false;
    }

    if (good) std::cout << "good";
    else std::cout << "bad";

    return 0;
}