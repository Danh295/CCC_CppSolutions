#include <iostream>

bool checkNum(int *nums)
{
    //nested if conditions determines return value
    if (nums[0] == 8 || nums[0] == 9) {
        if (nums[3] == 8 || nums[3] == 9) {
            if (nums[1] == nums[2]) return true;
        }
    }

    return false;
}

int main()
{
    // fast i/o
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    // init
    int nums[4];

    //for loop to take in 4 digits of the number
    for (int i = 0; i < 4; i++) {
        std::cin>>nums[i];
    }

    if (checkNum(nums)) std::cout << "ignore";
    else std::cout << "answer";

    return 0;
}