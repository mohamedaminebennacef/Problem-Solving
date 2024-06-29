#include <bits/stdc++.h>
using namespace std;

struct client {
    int t,l,h;
    client(int tp,int lb,int higher) {
        t=tp;l=lb;h=higher;
    }
};
vector<client> v;
int main()
{
    freopen("../input.txt","r",stdin);
    int q,n,m,t,l,h,s,e,lastT;
    bool b;
    cin>>q;
    while(q--){
        v.clear();
        b=true;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>t>>l>>h;
            v.push_back(client(t,l,h));
        }
        lastT=0;
        s=m;
        e=m;
        for(int i=0;i<n;i++) {
            s=max(s-(v[i].t-lastT),v[i].l);
            e=min(e+(v[i].t-lastT),v[i].h);
            if (v[i].h<s || v[i].l>e) {
                b=false;
                break;
            }
            lastT=v[i].t;
        }
        if(b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	
}