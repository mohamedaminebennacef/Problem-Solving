#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string s="";
	for (int i = 0; i < n; i++) {
		s="";
		for (int j = 0; j < n; j++) {
			s+=((i+j)&1 ? ".." : "##");
		}
		cout<<s<<endl;
		cout<<s<<endl;
	}	
}

int main() {
    freopen("../input.txt","r",stdin);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}