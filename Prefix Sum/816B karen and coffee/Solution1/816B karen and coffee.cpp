#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+7;
int n,k,q,l,r;
int main() {
    freopen("../input.txt","r",stdin);
    cin>>n>>k>>q;
    vector<pair<int,int>> recipes;
    vector<pair<int,int>> questions;
    for(int i=0;i<n;i++) {
        cin>>l>>r;
        recipes.push_back({l,r});
    }
    for(int i=0;i<q;i++) {
        cin>>l>>r;
        questions.push_back({l,r});
    }
    // Basic Brute force Approach
    // looping over questions
    for(int i=0;i<q;i++){
        int ans=0;
        // looping over every question intervalle
        for(int j=questions[i].first;j<=questions[i].second;j++) {
            int c=0;
            int nb=0;
            // looping over every recipes
            for(int c=0;c<n;c++) {
                if (recipes[c].first<=j && j<=recipes[c].second) {
                    nb++;
                    if(nb>=k) {
                        ans++;
                        break;
                    }
                }
            }
        }
        cout<<ans<<"\n";   
    }        
    /*
    3
    3
    0
    4
*/
    return 0;
}