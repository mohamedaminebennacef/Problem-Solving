#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,n,p=1;
    for(cin>>n,n--;i++<n;) p=p*(2*n-i+1)/i;
    cout<<p;
}