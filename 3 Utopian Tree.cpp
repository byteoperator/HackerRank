#include <iostream>
using namespace std;

int height(int n) {
    int h = 1;
    bool spring = true;
    while(n--) {
        if(spring) {
            h = (2 * h);
            spring = false;
        }
        else {
            h = h + 1;
            spring = true;
        }  
    }
    return h;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
