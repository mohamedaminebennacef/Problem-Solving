#include <iostream>
#include <unordered_map>
#define f first
#define s second
using namespace std;

int main() {
  unordered_map<string, int> umap; // hash table
  
  // inserting values by using [] operator 
  umap["GeeksforGeeks"] = 10; 
  umap["Practice"] = 20; 
  umap["Contribute"] = 30; 
  
  // Traversing an unordered map 
  for (auto x : umap) cout << x.f << " " << x.s << endl;   
  if (umap.find("Practice")!=umap.end())
    cout<<umap["Practice"];
  return 0;
}