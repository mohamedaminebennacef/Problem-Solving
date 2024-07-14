#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL)
#define newL cout<<"\n"
#define ll long long
#define pb push_back
#define f first
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    int t,res;
    cin>>t;
    while(t--) {
        int n,m,k;
        cin>>n>>k;
        vector<int> v(n);
        vector<int> p(n,0);
        for(int i=0;i<n;i++) 
            cin>>v[i];
        for(int i=1;i<n-1;i++) 
            p[i] = v[i]>v[i-1] && v[i]>v[i+1];
        //cumulative sum
        for(int i=1;i<n;i++)
            p[i]+=p[i-1];
        int ans=0;
        int l=0;
        for(int i=0;i+k-1<n;i++) {
            int res = p[i+k-2]-p[i];
            if (res>ans) {
                ans=res;
                l=i;
            }
        }
        cout<<ans+1<<" "<<l+1;
        newL;        
    }
    return 0;
}