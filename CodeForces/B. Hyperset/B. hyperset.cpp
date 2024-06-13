#include<bits/stdc++.h>
using namespace std;
int i,n,k,r;string t;set<string>s;
int main(){for(cin>>n>>k;n--;){cin>>t;
for(auto x:s){for(i=k;i--;)if(x[i]^t[i])x[i]^=66^t[i];r+=s.count(x);}
s.insert(t);}cout<<r/2;}

// #include<bits/stdc++.h>
// using namespace std;
// int i,n,k,r; // Declare variables i, n, k, r as integers
// string t; // Declare t as a string
// set<string>s; // Declare s as a set of strings

// int main() {
//     for(cin >> n >> k; n--;){ // Read n and k, then loop n times
//         cin >> t; // Read the string t
//         for(auto x : s) { // Loop over each string x in the set s
//             for(i = k; i--;) // Loop k times in reverse order (i goes from k-1 to 0)
//                 if(x[i] ^ t[i]) // If characters at position i in x and t are different
//                     x[i] ^= 66 ^ t[i]; // Modify x[i] by XORing it with 66 and t[i]
//             r += s.count(x); // Increment r by 1 if the modified x is in the set s
//         }
//         s.insert(t); // Insert t into the set s
//     }
//     cout << r/2; // Print r divided by 2
// }
