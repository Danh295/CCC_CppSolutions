#include <iostream>
#include <vector>

int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    const std::string strings = "ABCDEFGHIJKLMNOPQRST";
    const std::string ints = "1234567890";

    std::vector<char> target;
    std::string inst;
    std::string ins;
    std::string amt;

    std::cin>>inst;


    for (int i = 0; i < inst.size(); i++) {

        if (strings.find(inst[i]) != std::string::npos) {
            target.push_back(inst[i]);
            continue;
        }

        if (inst[i] == '+') {
            ins = "tighten";
            continue;
        } else if (inst[i] == '-') {
            ins = "loosen";
            continue;
        }

        if (ints.find(inst[i]) != std::string::npos) {
            int j = i;
            while (ints.find(inst[j]) != std::string::npos) {
                amt.push_back(inst[j]);
                j++;
            }
            i = j-1;
        }

        for (auto i : target) {
            std::cout << i;
        }

        std::cout << " " << ins << " " << amt << "\n";
        target.clear();
        amt.clear();
    }
}