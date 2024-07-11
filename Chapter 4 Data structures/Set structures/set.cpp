#include <bits/stdc++.h>
using namespace std;

// set<int> s;


int main() {
    set<int> s;
    s.insert(3);
    s.insert(2); 
    s.insert(5);
    s.insert(5); // no duplicate

    for (set<int>::iterator it=s.begin();it!=s.end();it++) cout << *it << "\n"; // 2 3 5 (sorted)

    return 0;
}