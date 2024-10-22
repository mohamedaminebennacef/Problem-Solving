#include <bits/stdc++.h>
using namespace std;

/*
elements are sorted selon key (ordered)
no duplicate key No two mapped values can have the same key
*/

int main()  {
    map<int,int> mp;
    mp[5] = 1;
    mp[11] = 5;
    mp[0] = 9;
    mp[7] = 1;

    for(auto i:mp) {
        cout << i.first << " " << i.second << "\n";
    }

    auto element = mp.begin();
    cout << element->first << " " << element->second;

    return 0;
}