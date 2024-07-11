#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> a(n+1,0);
        for(int i=1;i<=n;i++) {
            // determining [l,r] maximum by length subarray consisting only of zeros
            int l=1,r=n,j=1,maxl=INT_MIN;
            while(j<=n) {
                int ls=0;
                int d=j;
                while (a[j] == 0 && j<=n) {
                    j++;
                    ls++;
                }
                if (ls>maxl) {
                    maxl=ls;
                    l=d;
                    r=j-1;
                }
                j++;
            }
            if ((r-l+1)%2!=0)
                a[(l+r)/2]=i;
            else
                a[(l+r-1)/2]=i;
        }
            for(int i=1;i<=n;i++) 
                cout<<a[i]<<" ";
            cout<<"\n";
       
    }
    /*
    1 
    1 2 
    2 1 3 
    3 1 2 4 
    2 4 1 3 5 
    3 4 1 5 2 6 
    */
    return 0;
}