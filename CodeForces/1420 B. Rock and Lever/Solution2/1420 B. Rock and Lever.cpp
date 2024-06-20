#include <bits/stdc++.h>
using namespace std;
int t,n;

/*
Solution1 
    - Time Complexity O(t∗n) 1≤t≤10 1≤n≤10^5   10*10^5 = 10^6 -
*/

long long sum(long long n){
    return n*(n-1)/2;
}
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int k = log2(1e9);
        unordered_map<int,bool> vis; 
        long long ans=0;
        for(int i=k;i>=0;i--) { 
            int  nbZeros=0;
            int bitmask=1<<i;
            for(int j=0;j<n;j++) {
                if (vis[j])
                    continue;
                int cal=v[j]&bitmask;
                if(cal != 0) { 
                    vis[j] = true;
                    nbZeros++;
                }
            }
            ans+=sum(nbZeros);
        }
        cout<<ans<<endl; 
    }
    return 0;
}