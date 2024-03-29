#include <bits/stdc++.h>

class Section 
{
    public:
        int l = 0;
        int m = 0;
        int s = 0;

        void add(char book) {
            if (book == 'L') l += 1;
            else if (book == 'M') m += 1;
            else s += 1;
        }
};

int main() 
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    int i, j = 0;
    std::string shelf;

    std::cin >> shelf;

    Section total, l, m, s;

    for (i = 0; i < shelf.size(); i++) total.add(shelf[i]); // count number of each letter

    // count number of each letter in each section
    for (i = 0; i < total.l; i++) {
        l.add(shelf[j]);
        j += 1;
    }
    for (i = 0; i < total.m; i++) {
        m.add(shelf[j]);
        j += 1;
    }
    for (i = 0; i < total.s; i++) {
        s.add(shelf[j]);
        j += 1;
    }

    // number of min swaps = (# of non 'L's in section L) + (# of non 'M's in section M) + min('L's in section M, 'M's in section L)
    std::cout << (l.m + l.s + m.l + m.s - std::min(m.l, l.m)); 
}