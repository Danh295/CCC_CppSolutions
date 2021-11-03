/*
You and your friend have come up with a way to send messages back and
forth. 

Your friend can encode a message to you by writing down a positive integer
"N" and a symbol. You can encode that message by writing out that symbol "N"
times on a row on one line.

Give a message that your friend has encoded, decode it.
*/

#include <iostream>
#include <string>

int main()
{
    // INITIALIZATION + INPUT 
    int lines;
    std::cin>>lines;

    // MAIN PROCESS + ITERATIVE INPUT
    for(int i = 0; i < lines; i++)
    {
        int n;
        char s;
        std::cin>>n;
        std::cin>>s;

        // ITERATIVE OUTPUT
        for(int j = 0; j < n; j++)
        {
            std::cout<<s;
        }
        std::cout<<std::endl;
    }

    return 0;
}