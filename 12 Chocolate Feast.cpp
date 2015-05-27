#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    int N;
    int C;
    int M;
    cin >> T;
    while(T--){
        cin >> N >> C >> M;
        int answer = 0;
        int wrappers = 0;
        answer = N/C;
        wrappers = answer;
        while(wrappers >= M) {
            int extra = wrappers / M;
            answer = answer + extra;
            wrappers = wrappers % M;
            wrappers = wrappers + extra;
        }
        cout << answer << endl;
    }
    return 0;
}
