#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("../input.txt", "r", stdin);
    int n,ans=0;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            vector<int> occ(26,0);
            string conc=a[i]+a[j];
            for(int c=0;c<conc.length();c++)
                occ[conc[c]-'a']++;
            int nbimpair=0;
            for(int c=0;c<26;c++) {
                if (occ[c]%2!=0)
                    nbimpair++;
            }
            if(nbimpair<=1) 
                ans++;   
        }
    }
    cout<<ans<<endl;
    return 0;
}
