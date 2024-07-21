#include <bits/stdc++.h>
using namespace std;


signed main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  freopen("input.txt","r",stdin);
  int T=1;cin >> T;
  int a,b,c,d;
  while (T--) {
    cin>>a>>b>>c>>d;
    int b1=min(a,b);
    int b2=max(a,b);
    int b3=min(c,d);
    int b4=max(c,d);
    if(b2>=b3 && b2<=b4 && b3>=b1 && b3<=b2 || ( b1>=b3 && b1<=b4 && b4>=b1 && b4<=b2 ))
      cout<<"YES\n";
    else 
      cout<<"NO"<<endl;
  }
}

// YES
// NO
// NO
// YES
// YES
// NO
// NO
// NO
// NO
// NO
// NO
// YES
// YES
// YES
// YES




/*
  // think greedy first, codeforces A,B usually some sort of greedy, A super simple usually (800)
  // C on Div2 or E on Div3/4 require more thinking but still not too hard
  // for later problems, think about data structures like segment tree and ordered set
  // try query problems, im oddly good at them
  // As a participant, I approve these statements.
*/