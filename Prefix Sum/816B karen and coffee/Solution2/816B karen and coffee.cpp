#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+7;
int n,k,q,a,b;
int tab[N],gtk[N];
int main() {
    freopen("../input.txt","r",stdin);
    cin>>n>>k>>q;
    memset(tab,0,sizeof tab);
    memset(gtk,0,sizeof gtk);
    // 1 we fill a table with all the ranges
    for(int i=0;i<n;i++){
        cin>>a>>b;
        tab[a]++;
        tab[b+1]--;
    }
    for(int i=0;i<=N;i++) {
        tab[i]+=tab[i-1];// 2 cumulative sum
        if (tab[i]>=k)
            gtk[i]++;
    }
    for(int i=0;i<=N;i++) {
        gtk[i]+=gtk[i-1];
    }
    while(q--) {
        cin>>a>>b;
        cout<<gtk[b]-gtk[a-1]<<"\n";
    }
    /*
    3
    3
    0
    4
    */
    return 0;
}   
