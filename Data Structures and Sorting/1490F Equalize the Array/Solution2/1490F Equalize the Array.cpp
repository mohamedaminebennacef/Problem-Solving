    /*return the minimum number of elements that we can delete so the array contain element with equal occurence

    // Count the frequency of each element
    // Count the frequency of frequencies
    // determing the best frequency so the other elements have that frequency
    // yelzm na3rf 9adech mel element yelzmni ena9s bch na5lt lel occurence hethika
    // nparcouri les elements lkol o kol elements nhezou m3ahom el kol o nchof kife najm nhezholm fel le5r n5arj el minimum

    */


    #include <bits/stdc++.h>
    using namespace std;
    const int N=2*1e5+7;
    int n,t;
    int tab[N];
    map<int,int> mp;
    map<int,int> occ;
    vector<pair<int,int>> v; // occurence,9adech mel 3dad 3andou loccurence hethika
    int main() {
        freopen("../input.txt","r",stdin);
        cin>>t;
        while(t--) {
            cin>>n;
            mp.clear();
            occ.clear();
            v.clear();
            for(int i=0;i<n;i++) {
                cin>>tab[i];
                if (mp.find(tab[i])!=mp.end())
                    mp[tab[i]]++;
                else
                    mp[tab[i]]=1;
            }
            // kol occurence 9adech mawjouda men mara
            for(auto i:mp) {
                if(occ.find(i.second)!=occ.end())
                    occ[i.second]++;
                else
                    occ[i.second]=1;
            }
            for(auto i:occ){
                v.push_back({i.first,i.second});
            }
            int ans=INT_MAX;
            int resPerElement;
            for(int i=0;i<v.size();i++){
                resPerElement=0;
                for(int j=0;j<v.size();j++){
                    if (i==j)
                        continue;
                    if(v[j].first>v[i].first)
                        resPerElement+=(v[j].first-v[i].first)*v[j].second;
                    else
                        resPerElement+=v[j].first*v[j].second;
                }
                ans=min(ans,resPerElement);
            }
            cout<<ans<<endl;
        }
        return 0;
        /*
        2
        1
        2
        */
    }
