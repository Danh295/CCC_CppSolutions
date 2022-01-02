#include <iostream>
#include <string>
#include <unordered_map>

bool checkDistinct(int num)
{
    std::string currYr = std::to_string(num);
    std::unordered_map<char, int> nums;

    for(long unsigned int i = 0; i < currYr.size(); i++)
    {
        nums[currYr[i]] += 1;
    }

    for(auto &i : currYr)
    {
        if(nums[i] > 1)
            return false;
    }
    return true;
}

int main()
{
    int yr;
    std::string currYr;
    std::cin>>yr;

    while(true)
    {
        yr += 1;

        if(checkDistinct(yr))
        {
            std::cout<<yr;
            break;
        }
    }

    return 0;
}