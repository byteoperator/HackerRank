#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T, N, K;
    int present = 0;
    cin >> T;;
    while(T--) {
        scanf("%d", &N);
        scanf("%d", &K);
        int students[N];
        for(int i = 0; i < N; i++) {
            scanf("%d", &students[i]);
            if(students[i] <= 0)
                present++;
        }
        if(present < K) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        present = 0;
    }
    return 0;
}
