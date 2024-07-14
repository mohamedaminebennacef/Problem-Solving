/*
in [l,r] indices counting how many consecutive caractere are equals 
*/
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL);
#define newL cout<<"\n";
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int m,l,r,ans;string s;
    cin>>s;
    cin>>m;
    while(m--) {
        cin>>l>>r;
        ans=0;
        for(int i=l-1;i<r-1;i++) {
            if (i+1==s.length())
                continue;
            if(s[i]==s[i+1])
                ans++;
        }
        cout<<ans<<"\n";
    }
    /*
    1
    1
    5
    4
    */
    return 0;
}