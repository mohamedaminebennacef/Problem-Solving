#include <bits/stdc++.h>
using namespace std;
int n,r,d,f;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>n>>r;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    while(r--) {
        cin>>d>>f;
        d--;f--;
        int s=0;
        for(int i=d;i<=f;i++)
            s+=v[i];
        cout<<s<<"\n";
    }
    //cout<<ans<<endl; 
    /*
    60
    721
    231
    */
    return 0;
}