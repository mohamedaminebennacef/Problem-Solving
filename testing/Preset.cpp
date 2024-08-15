#include "bits/stdc++.h"
using namespace std;
 
void solve() {
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--) {
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for(auto& i:a) cin>>i;
        sort(a.begin(),a.end(),greater<int>());
        long long A=0,B=0,score=0;
        for(int i=0;i<n-1;i++) {
            if (k!=0) {
                if (a[i]-a[i+1]>=0) {
                    int x=a[i+1];
                    a[i+1]+=min(k,a[i]-a[i+1]);
                    k-=min(k,a[i]-x);
                    i++;
                }
            }
            else {
                break;
            } 
        }
        for(int i=0;i<n;i++) {
            if (i%2==0)
                A+=a[i];
            else
                B+=a[i]; 
        }
        score=A-B;
        cout<<score<<endl;
    }
}
 
signed main() {solve();}