#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        if(n<=2)
            cout<<0<<"\n";
        else {
            long long a=n-1;
            long long b=n-a;
            long long nb=1;
            while (a!=b+1) {
                nb++;
                a--;
                b++;
            }
            cout<<nb<<'\n';
        }
    }
}