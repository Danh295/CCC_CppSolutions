#include <iostream>
#include <string>

// GLOBAL INIT
std::string icon[] = {"*x*", " xx", "* *"};

// PROCESS
void scaleIcon(int k)
{
    for(int i = 0; i < 3; i++)
    {
        for(int reps = 0; reps < k; reps ++)
        {
            for(int j = 0; j < 3; j++)
            {
                for(int r = 0; r < k; r++)
                {
                    std::cout<<icon[i][j];
                }
            }
            std::cout<<std::endl;
        }
    }
}

int main() 
{
    // INITILIZATION
    int k;

    // INPUT
    std::cin>>k;

    // OUTPUT
    scaleIcon(k);

    return 0;
}