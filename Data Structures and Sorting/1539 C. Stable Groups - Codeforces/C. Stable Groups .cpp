#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=200007;
ll n,k,x;
ll t[N];
vector<ll> dist;
int main() {
    freopen("input.txt","r",stdin);
    cin>>n>>k>>x;
    for(int i=0;i<n;i++)
        cin>>t[i];
    sort(t,t+n);
    ll stableGroups=0;
    for(int i=0;i<n-1;i++){
        ll d=t[i+1]-t[i];
        if(d>x) {
            dist.push_back(d);
            stableGroups++;
        }
    }
    if (stableGroups == 0) {
        cout<<1;
        return 0;
    }
    if (k==0){
        cout<<stableGroups+1;
        return 0;
    }
    sort(dist.begin(),dist.end());
    for(int i=0;i<dist.size();i++){
        if(k<=0){
            cout<<stableGroups+1;
            return 0;
        }
        ll q=dist[i]/x;
        ll r=dist[i]%x;
        if (r==0)
            q--;
        if(q<=k){
            k-=q;
            stableGroups--;
        }
    }
    // int c = 0;
    // while (k > 0 && c < dist.size()) {
    //     ll q = (dist[c] - 1) / x; // calculate the number of segments needed
    //     if (q <= k) {
    //         k -= q;
    //         stableGroups--; // stableGroups is initialised with 1
    //     } else {
    //         break;
    //     }
    //     c++;
    // }
    cout<<stableGroups+1;
    return 0;
}