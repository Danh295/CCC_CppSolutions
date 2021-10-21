// can also be done with hashmaps
    // DMOJ submission not working, works with examples though
    // Test case #1: WA (Presentation Error, check your whitespace)
    // something to do with how input is being taken?

#include <iostream>
#include <vector>

using namespace std;

bool checkSquare(vector<vector<int>> sqr)
{
    int firstRow = sqr[0][0] + sqr[0][1] + sqr[0][2] + sqr[0][3];
    int firstCol = sqr[0][0] + sqr[1][0] + sqr[2][0] + sqr[3][0];

    int rowSum = 0;
    vector<vector<int>> colSqr(4);
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            colSqr[j].push_back(sqr[i][j]);
            rowSum += sqr[i][j];
        }

        if(rowSum != firstRow)
            return false;
        rowSum = 0;
    }

    int colSum = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            colSum += colSqr[i][j];
        }

        if(colSum != firstCol)
            return false;
        colSum = 0;
    }

    return true;
}

int main()
{
    vector<vector<int>> square;

    vector<int> row;
    int inp;
    for(int i = 0; i < 4; i++)
    {
        row.clear();
        for(int j = 0; j < 4; j++)
        {
            cin>>inp;
            row.push_back(inp);
        }
        square.push_back(row);
    }

    if(checkSquare(square))
        cout<<"magic";
    else
        cout<<"not magic";

    return 0;
}