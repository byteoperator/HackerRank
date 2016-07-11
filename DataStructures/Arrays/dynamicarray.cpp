#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,Q,lastAns = 0;
    cin >> N >> Q;
    vector<vector<int>> vvi;
    vvi.resize(N);
    int q,x,y;
    while(Q--) {
        cin>>q>>x>>y;
        int i = ((x ^ lastAns) % N);
        if(q == 1) {
            vvi[i].push_back(y);
        }
        else {
            int size = vvi[i].size();
            lastAns = vvi[i][y%size];
            cout << lastAns << endl;
        }
    }
    return 0;
}
