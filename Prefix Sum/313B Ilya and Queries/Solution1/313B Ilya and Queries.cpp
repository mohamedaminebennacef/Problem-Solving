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
    int n=s.length();
    vector<int> cum(n,0);
    for(int i=1;i<n;i++) {
        if(s[i]==s[i-1])
            cum[i]=1;
    }
    for(int i=1;i<n;i++) {
        cum[i]+=cum[i-1];
    }
    cin>>m;
    while(m--) {
        cin>>l>>r;
        l--;r--;
        cout<<cum[r]-cum[l]<<"\n";
    }
    /*
    1
    1
    2
    2
    0
    */
    return 0;
}