    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        int t,n,m;cin>>t;
        while (t--) {
            cin>>n>>m;
            // if (n<m) 
            //     cout<<"NO"<<endl;
            // else
            //     if (n == m) 
            //         cout<<"YES"<<endl;
            //     else if ((n-m)%2 != 0) 
            //         cout<<"NO"<<endl;
            //     else 
            //         cout<<"YES";
            if(n>=m&&n%2==m%2)
                cout<<"YES\n";
            else 
                cout<<"NO\n";

        }
        // while(t--)
        // {
        //     cin>>n>>m;
        //     if(n%2==1)
        //     {
        //         if(m<=n&&m%2==1)
        //         cout<<"YES"<<endl;
        //         else
        //         cout<<"NO"<<endl;
        //     }
        //     else
        //     {
        //         if(m<=n&&m%2==0)
        //         cout<<"YES"<<endl;
        //         else
        //         cout<<"NO"<<endl;
        //     }
        // }
        return 0;
    }