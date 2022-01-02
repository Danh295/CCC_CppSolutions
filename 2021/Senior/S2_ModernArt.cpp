#include <iostream>

using namespace std;

// brute force approach, it gets the right answer, but TLE on batch #6
int main()
{
    ios::sync_with_stdio(0);

    int r, c, k;
    cin>>r>>c>>k;

    int arr[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            arr[i][j] = 0;

    for(int i = 0; i < k; i++)
    {
        char choice;
        int n;
        cin>>choice>>n;
        n = n - 1;

        if(choice == 'R')
        {
            for(int j = 0; j < c; j++)
            {
                if(!arr[n][j])
                    arr[n][j] = 1;
                else
                    arr[n][j] = 0;
            }
        }
        else
        {
            for(int j = 0; j < r; j++)
            {
                if(!arr[j][n])
                    arr[j][n] = 1;
                else
                    arr[j][n] = 0;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(arr[i][j] == 1)
                sum += 1;
        }
    }

    cout << sum;   
}