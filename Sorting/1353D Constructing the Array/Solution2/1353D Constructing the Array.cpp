#include <bits/stdc++.h>
using namespace std;
struct compare {
    bool operator()(pair<int,int> p1,pair<int,int> p2)const{
        // on calcule la longueur de chaque pair
        int lp1 = p1.second-p1.first;
        int lp2 = p2.second-p2.first;
        if (lp1 == lp2) // idha 3andhom nafs el longueur
            return p1.first<p2.first; // n7ot el element eli 3andou el first 9bal
        else
            return lp1>lp2;
    }
};
int main() {
    int t,n;
    freopen("../input.txt","r",stdin);
    cin>>t;
    while(t--) {
        cin>>n;
        set<pair<int,int>,compare> s; // trié selon el fonction compare
        s.insert({0,n-1});
        int a[n];
        memset(a,0,sizeof a);
        for(int i=1;i<n+1;i++) {
            pair<int,int> p = *s.begin(); // n5arj akbar intervalle
            s.erase(s.begin());
            int l=p.first;
            int r=p.second;
            int index;
            if((r-l+1)%2!=0)
                index=(l+r)/2;
            else    
                index=(l+r-1)/2;
            a[index]=i;
            if (index>l)
                s.insert({l,index-1});
            if (index<r)
                s.insert({index+1,r});
        }
        for(auto t:a)
            cout<<t<<" ";
        cout<<"\n";
    }
    /*
    1 
    1 2 
    2 1 3 
    3 1 2 4 
    2 4 1 3 5 
    3 4 1 5 2 6 
*/
    return 0;
}