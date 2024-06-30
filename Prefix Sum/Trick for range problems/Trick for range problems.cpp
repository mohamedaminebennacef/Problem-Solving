#include <bits/stdc++.h>
using namespace std;
int q;
int main() {
    cin>>q;
    vector<int> v(9);
    for(int i=1;i<=8;i++) 
        v[i]=i;
   
    freopen("input.txt","r",stdin);
   
    vector<pair<int,int>> intervals;
    int d,f;
    for(int i=0;i<q;i++) {
        cin>>d>>f;
        intervals.push_back({d,f});
    }
    
    // calculating the occurence of each element v[i] in the intervalls of the queries
    // O(n*q)
    vector<int> occ(9,0);
    for(int j=0;j<q;j++) { // parcours les 4 intervalles (each query)
        for(int c=intervals[j].first;c<=intervals[j].second;c++) { // parcours of every interval [d,f]
            occ[c]++;
        }
        for(int x=1;x<=8;x++)
            cout<<occ[x]<<" ";
        cout<<"\n";
    }
    return 0;
}