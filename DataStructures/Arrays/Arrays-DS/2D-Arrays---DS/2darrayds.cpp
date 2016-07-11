#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[6][6];
    int sum = -2147483648;
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int s = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(s > sum) {
                sum = s;
            }
        }
    }   
    cout << sum << endl;
    return 0;
}
