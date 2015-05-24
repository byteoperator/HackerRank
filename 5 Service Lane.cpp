#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int freewayLength;
    int testCases;
    int i = 0;
    int j = 0;
    int largestVehicle = 4;
    (void)scanf("%d", &freewayLength);
    (void)scanf("%d", &testCases);

    int width[freewayLength];

    while(i < freewayLength) {
    	(void)scanf("%d", &width[i]);
    	i++;
    }

    while(testCases--) {
    	cin >> i;
    	cin >> j;
    	while(i <= j) {
    		if(width[i] < largestVehicle) {
    			largestVehicle = width[i];
    		}
    		i++;
    	}
    	printf("%d\n", largestVehicle);
    	largestVehicle = 4;
    }
    return 0;
}
