#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, int> m;
    string s;
    int n,q;
    cin >> n;
    while(n--) {
        cin >> s;
        if(m.find(s) == m.end()) {
            m[s] = 1;
        }
        else {
            m[s] += 1;
        }
    }
    cin >> q;
    while(q--) {
        cin >> s;
        cout << (m.find(s) == m.end() ? 0 : m[s]) << endl;
    }
    return 0;
}
