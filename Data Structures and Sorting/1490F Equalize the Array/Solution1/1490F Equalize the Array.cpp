#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    freopen("input.txt","r",stdin);
    cin>>t;
    while(t--) {
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];  
        map<int,int> occ;
        for(int i=0;i<n;i++) {
            occ[v[i]]++;
        }
        int c=0,max=0;
        unordered_map<int,int> occ2;
        for(map<int,int>::iterator it=occ.begin();it!=occ.end();it++){
            occ2[it->second]++;
        }
        for(const auto& pair:occ2) {
            if(pair.second>max){
                c=pair.first;
                max=pair.second;
            }
        }
        int som=0;
        for(const auto& pair:occ) {
            if (pair.second<c)
                som=som+(pair.second);
            else if (pair.second>c)
                som=som+(pair.second-c);
        }
        cout<<som<<endl; 
    }
    return 0;
    /*
    2
    1
    2
    */
}
