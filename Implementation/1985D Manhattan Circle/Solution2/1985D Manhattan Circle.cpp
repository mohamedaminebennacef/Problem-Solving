#include<bits/stdc++.h>
using namespace std;

void in(vector<string>&vec) {
  for (int i=0; i<vec.size(); i++) {
    cin >> vec[i];
  }
}
signed main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  freopen("../input.txt","r",stdin);
  int T=1;
  cin >> T;
  while (T--) {
	int n,m;
	cin >> n >> m;
	int ridx=-1,cidx=-1;
	int mx=0;
	vector<string>vec(n);
	in(vec);
	for (int i=0; i<n; i++) {
		int amt=0;
		for (int j=0; j<m; j++) {
		if (vec[i][j]=='#') amt++;
		}
		if (amt>mx) {
		mx=amt;
		ridx=i;
		}
	}
	mx=0;
	for (int j=0; j<m; j++) {
		int amt=0;
		for (int i=0; i<n; i++) {
		if (vec[i][j]=='#') amt++;
		}
		if (amt>mx) {
		mx=amt;
		cidx=j;
		}
	}
	cout << ridx+1 << " " << cidx+1 << "\n";
 }
}


/*
  // think greedy first, codeforces A,B usually some sort of greedy, A super simple usually (800)
  // C on Div2 or E on Div3/4 require more thinking but still not too hard
  // for later problems, think about data structures like segment tree and ordered set
  // try query problems, im oddly good at them
  // As a participant, I approve these statements.
*/