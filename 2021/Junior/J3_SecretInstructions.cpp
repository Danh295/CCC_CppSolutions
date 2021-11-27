#include <iostream>
#include <string>
#include <vector>

using namespace std;

void decode(vector<int> &instr)
{
    int sum;
    string curr, prev;
    for(int i = 0; i < instr.size(); i++)
    {
        prev = curr;
        sum = instr[i]/10000%10 + instr[i]/1000%10;

        if(sum % 2 != 0)
        {
            cout<<"left ";
            curr = "left ";
        }
        else if(sum != 0)
        {
            cout<<"right ";
            curr = "right ";
        }
        else
            cout<<prev;

        cout<<instr[i]/100%10<<instr[i]/10%10<<instr[i]%10<<endl;
    }
}

int main()
{
    int inp;
    vector<int> instr;

    cin>>inp;
    instr.push_back(inp);
    while(inp != 99999)
    {
        cin>>inp;
        instr.push_back(inp);
    }
    instr.pop_back();

    decode(instr);

    return 0;
}