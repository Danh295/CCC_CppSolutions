#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long r, c, k, counter;
    cin>>r>>c>>k;

    int row[r], col[c];
    for(long long i = 0; i < r; i++)
        row[i] = 0;
    for(long long i = 0; i < c; i++)
        col[i] = 0;

    for(int i = 0; i < k; i++)
    {
        char choice;
        long unsigned int n;
        
        cin>>choice>>n;

        if(choice == 'R' && sizeof(row) / sizeof(row[0]) >= n)
            row[n - 1] += 1;
        else if(sizeof(col) / sizeof(col[0]) >= n)
            col[n - 1] += 1;
    }

    counter = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if((row[i] + col[j]) % 2 == 1)
                counter += 1;
        }
    }

    cout<<counter;
}