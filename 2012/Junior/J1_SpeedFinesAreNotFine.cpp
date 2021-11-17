/*
PROBLEM DESCRIPTION:
Many communities now have radar signs that tell drivers what their speed is, in hopes that they will slow down.

You will output a message for a radar sign. The message will display information to a driver based on his/her speed according to the following table:

    km/h over the limit     fine
        1 to 20             $100
        21 to 30            $270
        31 or above         $500

Input Specification:
The user will be prompted to enter 2 integers. First, the user will be prompted to enter the speed limit. Second, the user will be prompted to enter the 
recorded speed of the car.

Output Specification:
If the driver is not speeding, the output should be: "Congratulations, you are within the speed limit!"
If the driver is speeding, the output should be: "You are speeding and your fine is $'f'", where 'F' is the amount of the fine as described in the table above.
*/

#include <iostream>

int main()
{
    // INITILIZATION
    int limit, s, fine;

    // INPUT
    std::cin>>limit;
    std::cin>>s;

    // CONDITIONAL PROCESSING & OUTPUTS
    if(s <= limit)
        std::cout<<"Congratulations, you are within the speed limit!";
    else
    {
        if(s < limit + 21)
            fine = 100;
        else if(s < limit + 31)
            fine = 270;
        else 
            fine = 500;
        
        std::cout<<"You are speeding and your fine is $"<<fine<<".";
    }

    return 0;
}