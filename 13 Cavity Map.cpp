#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N = 0;
    cin >> N;
    char map[N][N+1];
    
    for(int i = 0; i < N; i++) {
        scanf("%s", &map[i]);
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i > 0 && j > 0 && i < (N-1) && j < (N-1)) {
                if(map[i][j]  > map[i-1][j] &&
                   map[i][j]  > map[i][j-1] &&
                   map[i][j]  > map[i+1][j] &&
                   map[i][j]  > map[i][j+1]
                  ) {
                    printf("%c", 'X');
                }
                else {
                    printf("%c", map[i][j]);
                }
            }
            else {
                printf("%c", map[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
