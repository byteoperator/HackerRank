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
    while(i <= j) {
    	if(word[i] > word[j]) {
    		totalCost += (word[i] - word[j]);
    		i++; j--;
    	}
    	else if(word[j] > word[i]) {
    		totalCost += (word[j] - word[i]);
    		i++; j--;
    	}
    	else {
    		i++; j--;
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
 
