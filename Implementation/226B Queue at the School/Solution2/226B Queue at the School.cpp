#include <bits/stdc++.h>
using namespace std;
signed main() {
    freopen("../input.txt","r",stdin);
    int n,t;string s;
    cin>>n>>t>>s;
    string s2=s;
    while(t--) {
        for(int i=0;i<n-1;i+=1) {
            if(s2[i]=='B'&& s2[i+1]=='G')
                swap(s[i],s[i+1]);
        }
        s2=s;
    }
    cout<<s<<endl;
    // GBGGB
}