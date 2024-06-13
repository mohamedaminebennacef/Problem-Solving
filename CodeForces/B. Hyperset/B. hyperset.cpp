#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    vector<string> cards(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
    
    int count = 0;
 
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            for(int l = j + 1; l < n; ++l) {
                bool isSet = true;
                for(int m = 0; m < k; ++m) {
                    char a = cards[i][m];
                    char b = cards[j][m];
                    char c = cards[l][m];
                    if (!((a == b && b == c) || (a != b && b != c && a != c))) {
                        isSet = false;
                        break;
                    }
                }
                if (isSet) {
                    ++count;
                }
            }
        }
    }
    
    cout << count << endl;
    return 0;
}