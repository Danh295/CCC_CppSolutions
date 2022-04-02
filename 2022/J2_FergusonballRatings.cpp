#include <iostream>

using namespace std;

int main() {
    
    int numPlayers;
    cin>>numPlayers;

    int count = 0;
    int pts, fouls;
    bool star = true;

    for (int i = 0; i < numPlayers; i++) {
        cin>>pts>>fouls;
        if ((pts*5) - (fouls*3) > 40) {
            count += 1;
        } else {
            star = false;
        }
    }

    cout<<count;
    if (star) cout<<"+";
}