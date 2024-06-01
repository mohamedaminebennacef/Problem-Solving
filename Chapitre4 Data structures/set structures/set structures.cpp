#include <bits/stdc++.h>
using namespace std;

// set<int> s;


int main() {
    set<int> s;
    s.insert(3);
    s.insert(1);

    for (set<int>::iterator it=s.begin();it!=s.end();it++) cout << *it << "\n";

    return 0;
}