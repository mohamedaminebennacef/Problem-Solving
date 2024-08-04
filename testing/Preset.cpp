#include <bits/stdc++.h>
using namespace std;
void solve() {
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0), cin.tie(0);
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        vector<int> a(n);
        bool test=true;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i]%2!=a[0]%2) 
                test=false;
        }
        if (test)
            cout<<0<<endl;
        else {
            sort(a.begin(),a.end());
            int indimpair=0;
            for(int i=a.size()-1;i>=0;i--) {
                if (a[i]%2==1) {
                    indimpair=i;
                    break;
                }
            }
            int ans=0;
            int i=a.size()-1;
            while(i>=0) {
                if (a[i]%2==0) {
                    if (a[i]<a[indimpair]) {
                        a[i]+=a[indimpair];
                        indimpair=i;
                        ans++;
                        i--;
                    }
                    else {
                        a[indimpair]+=a[i];
                    }
                }
                else 
                    i--;
            }
            cout<<ans+1<<endl;
        }
    }
}    
int main() {solve();}
/*
0
0
2
4
3
3
3
*/