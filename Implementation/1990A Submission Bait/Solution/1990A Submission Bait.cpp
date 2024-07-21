// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define SOMETHING
using namespace std;
int t,n;
void solve() {
    cin>>n;
    vector<int> q(n+1,0);
    for(int i=1;i<=n;i++) {
        int x;
        cin>>x;
        q[x]++;
    }
    for(int i=1;i<=n;i++) {
        if (q[i]%2==1) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    #ifdef SOMETHING
    freopen("../input.txt","r",stdin);
    #endif //SOMETHING
    cin>>t;
    while(t--) {
        solve();
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