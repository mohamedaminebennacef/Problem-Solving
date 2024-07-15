#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL)
#define newL cout<<"\n"
#define ll long long
#define pb push_back
#define f first
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    vector<int> t(n);
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>t[i];
    for(int i=0;i<n;i++) cin>>a[i];
    int max=INT_MIN;
    int nbzmax=0;
    int jmax=0;
    for(int i=0;i<=n-k;i++) {
        int nbz=0;
        int s=0;
        for(int j=i;j<i+k;j++) {
            if (a[j]==0) nbz++;
            s+=t[j];
        }
        if (s>max && nbz>=nbzmax) {
            max=s;
            nbzmax=nbz;
            jmax=i;
        }
    }
    for(int i=jmax;i<jmax+k;i++)
        a[i]=1;
    int ans=0;
    for(int i=0;i<n;i++)
        if (a[i]!=0)
            ans+=t[i];
    cout<<ans<<"\n";
    // 16
    return 0;
}
