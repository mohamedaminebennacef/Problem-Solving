#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int ans=v[0];    
        for(int i=1;i<n;i++)
            ans&=v[i];
        cout<<ans<<"\n";    
    }   
    return 0;
}