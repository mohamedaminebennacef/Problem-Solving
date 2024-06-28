#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int N=1e3+7;
int n,k1,k2,k;
ll a[N];
ll b[N];
int main() {
    freopen("input.txt","r",stdin);
    cin>>n>>k1>>k2;
    k=k1+k2;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    priority_queue<ll> q;
    for(int i=0;i<n;i++){
        q.push(abs(a[i]-b[i]));
    }
    while (k>0) {
        ll g=q.top();
        q.pop();
        q.push(abs(--g));
        k--;
    }
    ll ans=0;
    while(!q.empty()) {
        ans+=pow(q.top(),2);
        q.pop();
    }
    cout<<ans<<endl;
    return 0;
}
