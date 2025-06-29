#include <bits/stdc++.h>
using namespace std;
#define first f;
long long sum(long long n) {
    return n*(n-1)/2;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("../input.txt", "r", stdin);
    int n;
    cin>>n;
    vector<string> v(n);
    vector<int> t(n); // kol chaine bech na3mlolha la3dad li ymathlha
    for(int i=0;i<n;i++) {
        cin>>v[i];
        int m=v[i].size();
        vector<int> occ(26,0);
        for(int j=0;j<m;j++) {
            occ[v[i][j]-'a']++;
        }
        t[i]=0;
        for(int j=0;j<26;j++){
            if (occ[j]%2 !=0) 
                t[i]+=(1<<25-j);
        }
    }
    long long ans=0;
    unordered_map<long long,long long> mp;
    for(int i=0;i<n;i++) {
        mp[t[i]]++;
    }
    for(auto a:mp) {
        if (a.second>1)
            ans+=sum(a.second);
    }
    // nfixiw 2 elements
    for(int x=0;x<26;x++){
        int bitmask=1<<x;
        unordered_map<long long,bool> vis;
        for(int i=0;i<n;i++) {
            int b=t[i]^bitmask;
            if(vis[b])
                continue;
            ans+=mp[t[i]]*mp[b];
            vis[b]=true;
            vis[t[i]]=true;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
