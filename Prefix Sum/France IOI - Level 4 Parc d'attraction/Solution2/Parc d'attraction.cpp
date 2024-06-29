#include <bits/stdc++.h>
using namespace std;
int n,r,d,f;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>n>>r;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> prefix(n);   
    prefix[0]=v[0];
    cout<<prefix[0]<<" ";
    for (int i=1;i<n;i++) {
        prefix[i] = prefix[i-1]+v[i];
        cout<<prefix[i]<< " ";
    }
    // we can calculate the prefix sum on the same array
    // cout<<"\n";
    // cout<<v[0]<<" ";
    // for(int i=1;i<n;i++) {
    //     v[i]+=v[i-1];
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";
    while(r--) {
        cin>>d>>f;
        d--;f--;
        int s=0;
        if (d==0)
            s=prefix[f];
        else    
            s=prefix[f]-prefix[d-1];

        cout<<s<<"\n";
    }
    /*
    60
    721
    231
    */
    return 0;
}