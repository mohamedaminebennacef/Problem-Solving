#include <bits/stdc++.h>
using namespace std;
int t,n,l,r;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    while(t--) {
        cin>>n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) {
            cin>>l>>r;
            v[i] = {l,r};
        }
        cout<<"\n";
        int ans=INT_MAX;
        for(int i=0;i<n;i++) {
            int nbinter=0;
            for(int j=0;j<n;j++) {
                if (i!=j) {
                    int l1=v[i].first,l2=v[j].first,r1=v[i].second,r2=v[j].second;
                    if (max(l1,l2)>min(r1,r2)) {
                        nbinter++;
                    }
                }
            }
            ans=min(ans,nbinter);
        }
        cout<<ans<<endl; 
    }
    /*
    0
    1
    2
    0
    */
    return 0;
}