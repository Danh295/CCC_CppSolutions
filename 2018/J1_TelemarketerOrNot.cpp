/*
PROBLEM DESCRIPTION:
Here at the Concerned Citizens of Commerce (CCC), we have noted that telemarketers like to use seven-digit phone numbers 
where the last four digits have three properties. Looking just at the last four digits, these properties are:

- the first of these four digits is an  or ;
- the last digit is an  or ;
- the second and third digits are the same.

For example, if the last four digits of the telephone number are "8229", "8338", or "9008", these are telemarketer numbers.

Write a program to decide if a telephone number is a telemarketer number or not, based on the last four digits. If the number is not a telemarketer number, we should answer the phone, and otherwise, we should ignore it.
*/

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