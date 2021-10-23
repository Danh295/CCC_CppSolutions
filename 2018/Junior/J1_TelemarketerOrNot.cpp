#include <iostream>

using namespace std;

bool checkNum(int *nums)
{
    if(nums[0] == 8 || nums[0] == 9)
    {
        if(nums[3] == 8 || nums[3] == 9)
        {
            if(nums[1] == nums[2])
                return true;
        }
    }
    return false;
}

int main()
{
    int nums[4];
    for(int i = 0; i < 4; i++)
    {
        cin>>nums[i];
    }

    if(checkNum(nums))
        cout<<"ignore";
    else   
        cout<<"answer";

    return 0;
}