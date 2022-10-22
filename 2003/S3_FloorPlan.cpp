#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;

int flr, rows, cols, plan[26][26], visited[26][26];

vector<pi> getNeighbors(pi &curr)
{
    vector<pi> neighbors;
    if (curr.first - 1 >= 0 && plan[curr.first - 1][curr.second] != 0) neighbors.push_back({curr.first - 1, curr.second});
    if (curr.first + 1 <= rows && plan[curr.first + 1][curr.second]) neighbors.push_back({curr.first + 1, curr.second});
    if (curr.second - 1 >= 0 && plan[curr.first][curr.second - 1] != 0) neighbors.push_back({curr.first, curr.second - 1});
    if (curr.second + 1 <= cols && plan[curr.first][curr.second + 1] != 0) neighbors.push_back({curr.first, curr.second + 1});
    return neighbors;
}

int main()
{
    // fast i/o
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // init
    cin >> flr >> rows >> cols;
    char temp;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> temp;
            if (temp == 'I') plan[r][c] = 0;
            else plan[r][c] = 1;
        }
    }
    
    // process
    vector<int> rooms;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            
            if (!visited[r][c]) {
                visited[r][c] = true;

                if (plan[r][c]) { // if node is a room, bfs from current node
                    cout << "@ ";

                    queue<pi> q;
                    q.push({r, c}); 

                    int size = 1; // 1 since source node is alrdy in queue
                    while (!q.empty()) { // while queue not empty
                        pi curr = q.front(); q.pop(); // get curr node & remove it from queue

                        // cout << "neighbors: ";
                        for (pi coord : getNeighbors(curr)) { // get neighgbouring room nodes
                            // cout << "(" << coord.first << ", " << ")" << " ";
                            if (!visited[coord.first][coord.second]) { // if node isn't already visited, add to queue & mark as visited
                                q.push(coord);
                                visited[coord.first][coord.second] = true;

                                size += 1; // increment room size counter
                            }
                        }
                        // cout << endl;
                    }
                    rooms.push_back(size); // when queue is empty (no more valid nodes to traverse), add room size to rooms vector
                    cout << "size: " << size << endl;
                } else cout << plan[r][c] << " ";
            } else cout << plan[r][c] << " ";
        }
        cout << endl;
    }

    sort(rooms.begin(), rooms.end(), greater<int>());

    int rmCnt = 0;
    cout << "flooring: " << flr << endl;
    for (int i : rooms) {
        if (flr - i >= 0) {
            flr -= i;
            cout << flr << " - " << i << " = " << flr - i << endl;
            rmCnt += 1;
        }
    }

    cout << rmCnt << " rooms, " << flr << " square metre(s) left over";


    return 0;
}