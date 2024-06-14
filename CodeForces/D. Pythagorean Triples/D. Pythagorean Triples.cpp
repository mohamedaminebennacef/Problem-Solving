#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n;
vector<int> v;

int main() {
    std::ios_base::sync_with_stdio(false);
    for(ll a=1;a<=1e9;a++) {
        ll j=pow(a,2);
        ll a2=pow(a,2);
        j--;
        if (j==0)
            continue;
        if (j%2==0) {
            ll b=j;
            b/=2;
            ll c=a2;
            c-=b;
            if(c>1e9)
                break;
            v.push_back(c);
        }

    }
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>::iterator low=upper_bound(v.begin(),v.end(),n);
        int position=low-v.begin();
        cout<<position<<'\n';
    }
    
    return 0;
}