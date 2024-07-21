// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int mx=*max_element(a.begin(),a.end());
        int occ=count(a.begin(),a.end(),mx);
        if (occ%2 !=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    /*
    YES
    NO
    YES
    NO
    YES
    */
    return 0;
}