#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//O(n) time
int main() {
    int n,d;
    cin>>n>>d;
    int arr[d]; //O(d) space
    for(int i = 0, j = 0, k = 0; i < n; ++i) {
        scanf("%d", &k);
        if(i >= d) {
            printf("%d ", k);
        }
        else {
            arr[j++] = k;
        }
    }
    for(int i = 0; i < d; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
