#include <iostream>
#include <string>
#include <vector>

using namespace std;

void decode(vector<int> &instr)
{
    int sum;
    for(int i = 0; i < instr.size(); i++)
    {
        sum = instr[i]/10000%10 + instr[i]/1000%10;
        cout<<sum<<endl;
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