#include <bits/stdc++.h>
using namespace std;
int main() {
    int pr=0,pc=0,o=0;
    freopen("input.txt","r",stdin);
    while(o!=1) {
        if (pc==5) {
            pr++;
            pc=0;
        }
        cin>>o;
        if(o==1)
            cout<<(abs(pc-2)+abs(pr-2));
        pc++;
    }
}