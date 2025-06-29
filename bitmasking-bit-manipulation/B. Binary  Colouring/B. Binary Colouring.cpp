#include <bits/stdc++.h>
using namespace std;
void solve() {
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--) {
        int x;cin>>x;
        vector<int> v(32); // 1<=n<=32
        // finding the binary representation of x
        for(int i=29;i>=0;i--) { // starting from MSB to LSB 1<=x<2^30
            v[i] = (x>= (1<<i));
            x%=(1<<i);
        }
        // converting 11..11 => 10.0-1 Starting from LSB to MSB
        for(int i=0,j;i<32;) {
            if (!v[i]) { // 0
                i++;
                continue;
            }
            j=i+1;
            while(v[j]) {
                v[j]=0;
                j++;
            }
            if (j>i+1) { // 11
                v[j]=1;
                v[i]=-1;
            }
            i=j;
        }
        cout<<32<<"\n";
        for(auto e:v) cout<<e<<" ";
        cout<<"\n";
    }
}
int main() {solve();}