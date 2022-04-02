#include <iostream>
#include <vector>

using namespace std;

int main() {

    string inst;
    cin>>inst;
    
    string strings = "ABCDEFGHIJKLMNOPQRST";
    string ints = "1234567890";

    vector<char> target;
    string ins;
    string amt;

    for (int i = 0; i < inst.size(); i++) {
        if (strings.find(inst[i]) != string::npos) {
            target.push_back(inst[i]);

            continue;
        }
        if (inst[i] == '+') {
            ins = "tighten";
            continue;
        } else if (inst[i] == '-') {
            ins = "loosen";
            continue;
        }
        if (ints.find(inst[i]) != string::npos) {
            int j = i;
            while (ints.find(inst[j]) != string::npos) {
                amt.push_back(inst[j]);
                j++;
            }
            i = j-1;
        }

        for (auto i : target) {
            cout<<i;
        }
        cout<<" "<<ins<<" "<<amt<<"\n";
        target.clear();
        amt.clear();
    }
}