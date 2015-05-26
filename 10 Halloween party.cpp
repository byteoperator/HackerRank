#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    long long K;
    cin >> T;
    while(T--) {
        cin >> K;
        if(K % 2 == 0) {
            cout << (K/2) * (K/2) << endl;
        }
        else {
            cout << (K/2) * (K/2 + 1) << endl;
        }
    }
    return 0;
}
