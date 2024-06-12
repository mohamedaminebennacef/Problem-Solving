#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> names;
    int n;
    cin >> n;
    while (n>0) {
        n--;
        string s;
        cin >> s;
        if (names.find(s) != names.end()) {
            cout << s << names[s] << "\n";
            names[s]++;
        } else {
            names[s] = 1;
            cout << "OK\n";
        }
    }
    return 0;
}