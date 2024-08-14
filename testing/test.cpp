#include <bits/stdc++.h>
using namespace std;
void solve() {
    freopen("input.txt","r",stdin);
    int n,k;cin>>n>>k;
    vector<int> v;
    for(int i=1;i<=n;i++)
        v.push_back(i);
    if (k==0) {
        for(int i=0;i<n-k-1;i++)
            cout<<v[i]<<" ";
    }
    else {
        for(int i=0;i<k;i++) {
            cout<<v[i]<<" ";
        }
        for(int i=0;i<n-k;i++) {
            cout<<v[n-i-1]<<" ";
        }
    }
}
int main() {solve();}