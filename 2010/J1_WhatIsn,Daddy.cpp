#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, count, temp1, temp2;
    cin>>n;

    count = 1;
    temp1 = n;
    temp2 = n-temp1;

    while(temp1 > temp2 || temp1 != temp2) {
        temp1 -= 1;
        temp2 += 1;

        // cout<<n/2<<" "<<temp1<<" "<<temp2<<"\n";

        count += 1;

        // if(temp1 == 0)
        //     break;
    }

    cout<<count;
}