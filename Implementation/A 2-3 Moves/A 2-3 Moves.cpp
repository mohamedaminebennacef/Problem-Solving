#include <bits/stdc++.h>
using namespace std;
#define newL cout<<"\n"
int main() {
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    int ans;
    while(t--){
        int n;
        cin>>n;
        if (n==1)
            ans=2;
        else {
            if(n%3==0)
                ans=n/3;
            else
                ans=n/3+1;
        }
        cout<<ans;
        newL;
    }
    return 0;
}