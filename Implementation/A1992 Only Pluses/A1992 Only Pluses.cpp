#include <bits/stdc++.h>
using namespace std;
#define newL cout<<"\n"
int main() {
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        // int v[3];
        // for(int i=0;i<3;i++)
        //     cin>>v[i];
        // int i=5;
        // int j=0;
        // while(i){
        //     while(i && j<3) {
        //         sort(v,v+3);
        //         v[j]++;
        //         if (j+1<3) {
        //             if (v[j]==v[j+1]) 
        //                 j++;
        //         }
        //         else
        //             j=0;
        //         i--;
        //     }
        // }
        // cout<<v[0]*v[1]*v[2]<<"\n";
        int a,b,c,m;
        cin>>a>>b>>c;
        for(int i=0;i<5;i++) {
            int m=min(min(a,b),c);
            if(m == a) {
                a++;
                continue;
            }
            if(m == b) {
                b++;
                continue;;
            }
            if(m == c) {
                c++;
                continue;
            }
        }
        cout<<a*b*c<<"\n";
    }
    return 0;
}