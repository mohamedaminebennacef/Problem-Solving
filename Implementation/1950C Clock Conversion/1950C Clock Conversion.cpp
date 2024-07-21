#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;cin>>s;
    string sh=s.substr(0,2); // "hh"
    if (sh=="00")
        s="12"+s.substr(2,5)+" AM";
    else if (sh=="12") {
        s+= " PM";
    }
    else if (sh<"12") {
        s+=" AM";
    }
    else {
        if (stoi(sh)-12<10)
            s="0"+to_string((stoi(sh)-12))+s.substr(2,5)+" PM";
        else 
            s=to_string((stoi(sh)-12))+s.substr(2,5)+" PM";
    }
    cout<<s<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    freopen("input.txt","r",stdin);
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
/*
  // think greedy first, codeforces A,B usually some sort of greedy, A super simple usually (800)
  // C on Div2 or E on Div3/4 require more thinking but still not too hard
  // for later problems, think about data structures like segment tree and ordered set
  // try query problems, im oddly good at them
  // As a participant, I approve these statements.
*/