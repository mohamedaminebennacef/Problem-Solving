/*
constructive algorithms 
data structures 
math 
*1500
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int m[n+1]; // 1-based
        bool matched[n+1];
        memset(matched,0,sizeof matched);
        for(int i=1;i<n+1;i++) {
            int a;
            cin>>a;
            m[i]=a;
            matched[a]=true;
        }
        vector<int> v;
        for(int i=1;i<n+1;i++) {
            if(!matched[i] && m[i]==0) // me5dhech o ma3tach
                v.push_back(i);
        }
        for(int i=1;i<n+1;i++) { // m5dhech o 3ta
            if(!matched[i] && m[i]!=0)
                v.push_back(i);
        }
        int p=0,i=1;
        while (i<n+1) {
            if (p>=v.size()) // rotation
                p=0;
            if (m[i]==0) {
                if (v[p]==i) 
                    p++;
                else {
                    m[i]=v[p];
                    p++;
                    i++;
                }
            }
            else
                i++;
        }
        for(int i=1;i<n+1;i++) 
            cout<<m[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
