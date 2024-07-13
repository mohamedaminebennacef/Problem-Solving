/*
te7sb number les indices i wa9tli tna7i el caractere eli fel indice i yo93od palindrome
*/
#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL);
#define newL cout<<"\n";
int main() {
    freopen("../input.txt","r",stdin);
    int t=1;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string ch;
        cin>>ch;
        
        int cum[26][n];
        memset(cum,0,sizeof cum);
       
        for(int i=0;i<n;i++)
            cum[ch[i]-'a'][i]=1;
        
        for(int i=0;i<26;i++) {
            for(int j=1;j<n;j++)
                cum[i][j]+=cum[i][j-1];
        }

        int ans=0;
        for(int i=0;i<n;i++) {
            char del=ch[i];
            int occ=cum[ch[i]-'a'][n-1-i]-cum[ch[i]-'a'][i];
            if (occ==n-1-2*i)   
                ans++;
        }
        cout<<ans;
        newL;
    }
    /*
    1
    4
    2
    */
    return 0;
}