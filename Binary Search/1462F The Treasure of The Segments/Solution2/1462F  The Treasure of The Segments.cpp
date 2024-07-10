#include <bits/stdc++.h>
using namespace std;
int t,n,l,r;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    vector<pair<int,int>> v;
    vector<int> left;
    vector<int> right;
    while(t--) {
        cin>>n;
        v.clear();
        left.clear();
        right.clear();
        for(int i=0;i<n;i++) {
            cin>>l>>r;  
            v.push_back({l,r});
            left.push_back(l);
            right.push_back(r);
        }
        sort(left.begin(),left.end());       
        sort(right.begin(),right.end()); 
        int ans=INT_MAX; 
        for(auto p:v) {
            l = p.first;
            r = p.second;
            int L=lower_bound(right.begin(),right.end(),l)-right.begin();
            int R=max(0,n-(int)(upper_bound(left.begin(),left.end(),r)-left.begin()));
            ans = min(ans,L+R);
        }     
        cout<<ans<<"\n";
    }
    /*
    0
    1
    2
    0
    */
    return 0;
}