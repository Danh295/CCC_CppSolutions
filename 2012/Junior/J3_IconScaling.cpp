#include <iostream>
#include <string>

std::string icon[] = {"*x*", " xx", "* *"};

void scaleIcon(int k)
{
    for(int i = 0; i < 3; i++){
        for(int reps = 0; reps < k; reps ++){
            for(int j = 0; j < 3; j++){
                for(int r = 0; r < k; r++){
                    std::cout<<icon[i][j];
                }
            }
            std::cout<<std::endl;
        }
    }
}

int main() {

    int k;
    std::cin>>k;

    scaleIcon(k);

    return 0;
}