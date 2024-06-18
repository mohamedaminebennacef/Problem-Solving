#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int> d(n);
    for(int i=0;i<n;i++)
        cin>>d[i];    
    int ans=0;
    for(int i=0;i<1<<n;i++){ // parcours 0 => 2^n-1
        int diffTotal=0,nbset=0,diffmax=INT_MIN,diffmin=INT_MAX; // diffmax=0,diffmin=1e7;
        for(int j=0;j<n;j++) {
            int bitmask=1<<j; // generating the mask
            int cal=i&bitmask;
            if(cal!=0) {
                diffTotal+=d[n-j-1];
                diffmax=max(diffmax,d[n-j-1]);
                diffmin=min(diffmin,d[n-j-1]);
                nbset++;
            }
        }
        if(l<=diffTotal && diffTotal<=r && diffmax-diffmin>=x && nbset>1) {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}