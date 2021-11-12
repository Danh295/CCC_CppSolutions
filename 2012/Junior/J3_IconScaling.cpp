#include <iostream>
#include <string>
using namespace std;

string icon[] = {"*x*", " xx", "* *"};

int main() {

    int k;
    cin>>k;

    for(int i = 0; i < 3; i++){
        for(int reps = 0; reps < k; reps ++){
            for(int j = 0; j < 3; j++){
                for(int r = 0; r < k; r++){
                    cout<<icon[i][j];
                }
            }
            cout<<endl;
        }
    }

    return 0;
}