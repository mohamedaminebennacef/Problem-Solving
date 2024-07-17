#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef int INT;
#define int ll
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

// void setIO(string s) {
//   freopen((s+".in").c_str(),"r",stdin);
//   freopen((s+".out").c_str(),"w",stdout);
// }

// void inouttxt() {
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);
// }

namespace predefined_vars {
  string sp=" ";
  string nl="\n";
  int e1=10;
  int e2=100;
  int e3=1000;
  int e4=10000;
  int e5=100000;
  int e6=1000000;
  int e7=10000000;
  int e8=100000000;
  int e9=1000000000;
  int e10=10000000000;
  int e11=100000000000;
  int e12=1000000000000;
  int e13=10000000000000;
  int e14=100000000000000;
  int e15=1000000000000000;
  int e16=10000000000000000;
  int e17=100000000000000000;
  int e18=1000000000000000000;
}

using namespace predefined_vars;

namespace linked_list {
  struct linkl {
    int x;
    linkl *prev=NULL,*next=NULL;
  };
  linkl* newlink(int x, linkl *a=NULL, linkl *b=NULL) {
    linkl *c=new linkl;
    c->x=x;
    c->prev=a;
    c->next=b;
    return c;
  }
  void insert(linkl *a, int x) {
    // insertion after
    linkl *b=newlink(x,a,a->next);
    if (a->next!=NULL) a->next->prev=b;
    a->next=b;
  }
  void del(linkl *a) {
    if (a->prev!=NULL && a->next!=NULL) {
      a->prev->next=a->next;
      a->next->prev=a->prev;
    }
    else if (a->prev!=NULL) {
      a->prev->next=NULL;
    }
    else a->next->prev=NULL;
    delete a;
  }
  void print(linkl *a) {
    while (a!=NULL) {
      cout << a->x << " ";
      a=a->next;
    }
    cout << "\n";
  }
  bool contains(linkl *a, int x) {
    bool found=false;
    while (a!=NULL) {
      if (a->x==x) {
        found=true;
        break;
      }
      a=a->next;
    }
    return found;
  }
}

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int random(int mod) {
  return rng()%mod;
}

int hehehash() {
  int x=69*random(420);
  int y=420*random(69);
  int z=x*y;
  for (int i=0; i<69; i++) {
    z+=random(e13);
  }
  int a=694206942069420%random(694206942069420);
  return random(e18)+(z+a)+69420;
}

bool is_sorted(vector<int>&vec) {
  int n=vec.size();
  for (int i=1; i<n; i++) {
    if (vec[i]<vec[i-1]) return false;
  }
  return true;
}

int gcd(int x, int y) {
  return __gcd(x,y);
}

int lcm(int x, int y) {
  return (x*y)/gcd(x,y);
}

void sort2(vector<int>&x, vector<int>&y, bool g=false) {
  int n=x.size();
  vector<pii>z(n);
  for (int i=0; i<n; i++) {
    z[i]={x[i],y[i]};
  }
  if (!g) sort(z.begin(),z.end());
  else sort(z.begin(),z.end(),greater<pii>());
  for (int i=0; i<n; i++) {
    x[i]=z[i].first;
    y[i]=z[i].second;
  }
}

double shoelace(vector<pii>coords) {
  int n=coords.size();
  double area=0.0;
  int j=n-1;
  for (int i=0; i<n; i++) {
    area+=(coords[j].first+coords[i].first)*(coords[j].second-coords[i].second);
    j=i;
  }
  return abs(area/2.0);
}

namespace printout {

void po(vector<int>&vec) {
  for (auto x:vec) {
    cout << x << " ";
  }
  cout << "\n";
}

void po(vector<string>&vec, string sep="\n") {
  for (auto x:vec) {
    cout << x << sep;
  }
  if (sep!="\n") cout << "\n";
}

void po(vector<pii>&vec) {
  for (auto x:vec) {
    cout << x.first << " " << x.second << "\n";
  }
}

void po(multiset<int>&ms) {
  for (auto x:ms) {
    cout << x << " ";
  }
  cout << "\n";
}

}

void srt(vector<int>&vec) {
  sort(vec.begin(),vec.end());
}

#define yes cout << "YES\n"
#define no cout << "NO\n"

// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 

// use either one, just dont forget to comment #define int ll

// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

// template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// below is ordered_multiset

// namespace __gnu_pbds{
//           typedef tree<int,
//                        null_type,
//                        less_equal<int>,
//                        rb_tree_tag,
//                        tree_order_statistics_node_update> ordered_set;
// }
// using namespace __gnu_pbds;


using namespace printout;

int power2(int x) {
  int y=1;
  for (int i=0; i<x; i++) {
    y*=2;
  }
  return y;
}

int sum(vector<int>&vec) {
  int sm=0;
  for (int i=0; i<vec.size(); i++) {
    sm+=vec[i];
  }
  return sm;
}

void in(vector<int>&vec) {
  for (int i=0; i<vec.size(); i++) {
    cin >> vec[i];
  }
}

void in(vector<char>&vec) {
  for (int i=0; i<vec.size(); i++) {
    cin >> vec[i];
  }
}

void in(vector<string>&vec) {
  for (int i=0; i<vec.size(); i++) {
    cin >> vec[i];
  }
}

void in(vector<pii>&vec) {
  for (int i=0; i<vec.size(); i++) {
    cin >> vec[i].first >> vec[i].second;
  }
}

bool letter(char c) {
  if (c>='a' && c<='z') return true;
  return false;
}

bool num(char c) {
  if (c>='0' && c<='9') return true;
  return false;
}

void lower(string &s) {
  for (int i=0; i<s.size(); i++) {
    s[i]=tolower(s[i]);
  }
}

void solve() {
  
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int T=1;
  cin >> T;
  while (T--) {
    solve();
  }
}


/*
  // think greedy first, codeforces A,B usually some sort of greedy, A super simple usually (800)
  // C on Div2 or E on Div3/4 require more thinking but still not too hard
  // for later problems, think about data structures like segment tree and ordered set
  // try query problems, im oddly good at them
  // As a participant, I approve these statements.
*/