#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> segments;
set<vector<pair<int,int>>> sett;
int t,n;
int main() {
    std::ios_base::sync_with_stdio(false);
    cin>>t;
    int x=0,y=0;
    for(int i=0;i<t;i++){
        sett.clear();
        string ch;
        cin>>ch;
        n=ch.size();
        int res=0;
        for(int j=0;j<n;j++) {
            char c=ch[j];
            int dx=x;
            int dy=y;
            if (c=='N')
                dy++;
            else if (c=='S')
                dy--;
            else if (c=='E')
                dx++;
            else 
                dx--;
            segments.clear();
            segments.push_back(make_pair(x,y));
            segments.push_back(make_pair(dx,dy));
            sort(segments.begin(),segments.end());
            if (sett.find(segments) != sett.end()) {
                res++;
            }
            else {
                sett.insert(segments);
                res+=5;
            }
            x=dx;
            y=dy;
        }
        cout <<res<<"\n";
    }
    return 0;
}