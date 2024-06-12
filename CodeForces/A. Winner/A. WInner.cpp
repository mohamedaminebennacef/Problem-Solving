#include <bits/stdc++.h>
using namespace std;
map<string,int> scores;
vector<pair<string,int>> roundScores;
int n,roundscore,ma;
string name;
int main() {
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>name>>roundscore;
        if (scores.find(name) != scores.end()) {
            scores[name] += roundscore;
        }
        else {
            scores[name] = roundscore;
        }
        roundScores.push_back(make_pair(name,scores[name]));
    }
    ma = INT_MIN;
    for(map<string,int>::iterator it = scores.begin();it!=scores.end();++it) {
        ma = max(ma,it->second);
    }
    for(int i=0;i<n;i++) {
        pair<string,int> p = roundScores[i];
        if (scores[p.first] == ma && p.second>=ma) {
            cout << p.first;
            return 0;
        }
    }


}
