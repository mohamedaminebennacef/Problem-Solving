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
    vector<int> a(n); // theorme
    vector<int> t(n); // sleep
    for(int i=0;i<n;i++) 
        cin>>a[i];
    for(int i=0;i<n;i++) {
        cin>>t[i];
        if (t[i])
            t[i]=a[i];
    }
    // cumulative sum
    for(int i=1;i<n;i++) {
        a[i]+=a[i-1]; 
        t[i]+=t[i-1];
    }
    int ans=0;
    for(int i=0;i+k-1<n;i++){
        int calcul=a[i+k-1];
        if (i)
            calcul-=a[i-1];
        calcul+=t[n-1]-t[i+k-1];
        if (i)
            calcul+=t[i-1];
        ans=max(ans,calcul);
    }
    cout<<ans<<"\n";
    return 0;
}
