#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    while(i < n) {
        cin >> arr[i];
        i++;
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
