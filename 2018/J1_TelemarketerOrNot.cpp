#include <iostream>

bool checkNum(int *nums)
{
    // PROCESS

    //nested if conditions determines return value
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
    // INITIALIZE
    int nums[4];

    // INPUT
        //for loop to take in 4 digits of the number
    for(int i = 0; i < 4; i++)
    {
        std::cin>>nums[i];
    }

    // OUPUT
    if(checkNum(nums))
        std::cout<<"ignore";
    else   
        std::cout<<"answer";

    return 0;
}