#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt","r",stdin);
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t;cin >> t;
    while(t--) {
        int n;cin>>n;
        vector<int> w(n);
        for(auto&i:w) cin>>i;
        int i=0,j=n-1,a=w[0],b=w[n-1],ans;
        if (n>1) {
            ans=(a!=b?0:2);
        }      
        ans=0;  
        while(i<j) {
            if (a<b) {
                i++;
                a+=w[i];
            } 
            else if(a>b) {
                j--;
                b+=w[j];
            }
            else {
                ans=i+1+n-j;
                i++;
                j--;
                a+=w[i];
                b+=w[j];
            }            
        }
        cout<<ans<<endl;
    }
}