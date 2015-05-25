#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N = 0;
    int i = 0;
    bool done = false;
    int min = 0;
    cin >> N;
    int sticks[N];
    while(i < N) {
        scanf("%d", &sticks[i]);
        i++;
    }
    while(!done) {
        min = 1001;
        for(int i = 0; i < N; i++) {
            if(sticks[i] != 0 && sticks[i] < min)
                min = sticks[i];
        }
        int count = 0;
        for(int i = 0; i < N; i++) {
            if(sticks[i] >= min) {
                sticks[i] -= min;
                count++;
            }
        }
        if(count > 0) {
                cout << count << endl;
        }
        else {
                done = true;
        }
    }
    return 0;
}
