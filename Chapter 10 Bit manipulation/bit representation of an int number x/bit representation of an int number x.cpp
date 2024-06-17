#include <bits/stdc++.h>
using namespace std;
int main() {
    int x=27;
    for(int i=4;i>=0;i--) {
        if(x&(1<<i)) cout<<"1";
        else cout<<"0";
    }
    return 0;
}