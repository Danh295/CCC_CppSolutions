#include <iostream>

using namespace std;

int main() {

    // INITIALIZATION
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int numPlayers;
    int count = 0;
    int pts, fouls;
    bool star = true;
    
    // INPUT
    cin>>numPlayers;

    // PROCESS
    for (int i = 0; i < numPlayers; i++) {
        cin>>pts>>fouls;
        if ((pts*5) - (fouls*3) > 40) {
            count += 1;
        } else {
            star = false;
        }
    }

    // OUTPUT
    cout<<count;
    if (star) cout<<"+";
}