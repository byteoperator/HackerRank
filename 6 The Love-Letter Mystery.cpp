#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(string word) {
    int i = 0;
    int j = word.length() - 1;
    int totalCost = 0;
    int cost = 0;
    while(i <= j) {
    	if(word[i] > word[j]) {
    		cost = word[i] - word[j];
    		totalCost += cost;
    		i++;
    		j--;
    	}
    	else if(word[j] > word[i]) {
    		cost = word[j] - word[i];
    		totalCost += cost;
    		i++;
    		j--;
    	}
    	else {
    		i++;
    		j--;
    	}
    }
    return totalCost;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    int minOperation;
    string word;
    cin >> T;
    while(T--) {
        cin >> word;
        minOperation = solve(word);
        cout << minOperation << endl;
        minOperation = 0;
    }
    return 0;
}
 
