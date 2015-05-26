#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    long long N;
    cin >> T;
    while(T--) {
        cin >> N;
        long long M = N;
        int count = 0;
        while(N > 0) {
            int r = N % 10;
            if(r != 0 && M % r == 0) {
                count++;
            }
            N = N / 10;
        }
        cout << count << endl;
    }
    return 0;
}
