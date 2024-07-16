#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL)
#define newL cout<<"\n"
#define ll long long
#define pb push_back
#define f first
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        cout<<(n - n / 2)<<" "<<(m - m / 2)<<"\n";
    }
    return 0;
}
