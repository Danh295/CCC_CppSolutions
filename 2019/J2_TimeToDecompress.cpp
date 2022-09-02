#include <iostream>
#include <string>

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init 
    int lines;
    std::cin >> lines;

    // MAIN PROCESS + ITERATIVE INPUT
    for(int i = 0; i < lines; i++) {
        int n;
        char s;
        std::cin >> n;
        std::cin >> s;

        // ITERATIVE OUTPUT
        for (int j = 0; j < n; j++) {
            std::cout<<s;
        }
        std::cout << std::endl;
    }

    return 0;
}