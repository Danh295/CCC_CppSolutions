#include <iostream>

int main()
{
    /// INITIALIZATION

    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long r, c, k, counter;
    int row[r], col[c];

    // INPUT
    std::cin>>r>>c>>k;

    // PROCESS

    // set all counter values to 0
    for(long long i = 0; i < r; i++)
        row[i] = 0;
    for(long long i = 0; i < c; i++)
        col[i] = 0;

    // iterative input based processing
    for(int i = 0; i < k; i++)
    {
        char choice;
        long unsigned int n;
        
        std::cin>>choice>>n;

        // increment counter values depending on input
        if(choice == 'R' && sizeof(row) / sizeof(row[0]) >= n)
            row[n - 1] += 1;
        else if(sizeof(col) / sizeof(col[0]) >= n)
            col[n - 1] += 1;
    }

    // depending on how many times a tile has been flipped, whether it's gold or black can be determined
        // determine using modulous operators, use counter to track number of tiles
    counter = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if((row[i] + col[j]) % 2 == 1)
                counter += 1;
        }
    }

    // OUTPUT

    std::cout<<counter;
}