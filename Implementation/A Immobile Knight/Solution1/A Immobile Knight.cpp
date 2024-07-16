#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false):cin.tie(NULL):cout.tie(NULL)
#define newL cout<<"\n"
#define ll long long
#define pb push_back
#define f first

using namespace std;

int dx[8]={2,2,-2,-2,1,-1,1,-1};
int dy[8]={1,-1,1,-1,2,2,-2,-2};

bool can_move(int i,int j,int n,int m) {
    return i<n && i>-1 && j<m && j>-1;
}

int main() {
    freopen("../input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        bool stop=0;
        for(int i=0;i<n;i++){
            if(stop)
                break;

            for(int j=0;j<m;j++){
                if(stop)
                    break;

                bool canMove=0;
                for(int c=0;c<8;c++){
                    if(can_move(i+dx[c],j+dy[c],n,m)){
                        canMove=1;
                        break;
                    }
                }

                if(!canMove){
                    cout<<i+1<<" "<<j+1;
                    stop=1;
                }
            }
        }
        if(!stop) // no poistion found
            cout<<1<<" "<<1; // adhmen position
        newL;
    }
    return 0;
}
