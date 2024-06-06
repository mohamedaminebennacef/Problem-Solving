#include <bits/stdc++.h>
using namespace std;



int main() {
    vector<int> hand = {4,1,2,3,6,2,3,4,7,8};
    for(auto element : hand)
        cout << element << ",";
    cout << endl;
    for(int i=0;i<hand.size();i++)
        cout << hand[i]<< ",";;

    return 0;
}