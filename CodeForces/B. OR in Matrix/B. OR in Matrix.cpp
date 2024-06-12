#include <bits/stdc++.h>
using namespace std;

const int N=100;
int m,n;
int a[N][N];
int b[N][N];
int main() {
    cin>>m>>n;
    for (int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>b[i][j];
        }
    }
    for (int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            a[i][j] = 1;
        }
    }
    for (int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if (b[i][j] == 0) {
                for(int c=0;c<m;c++) {
                    a[c][j] = 0;
                }
                for(int c=0;c<n;c++) {
                    a[i][c] = 0;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) {
            int t=0;
            for(int c=0;c<m;c++) {
                t+=a[i][c];
                if (b[i][j] == 0 && t>0)
                {
                    cout << "NO";
                    return 0;
                }
            }
            for(int c=0;c<n;c++) {
                t+=a[c][j];
                if (b[i][j] == 0 && t>0)
                {
                    cout << "NO";
                    return 0;
                }            
            }
            if (t==0 && b[i][j]!=0)
            {
                cout << "NO";
                return 0;
            } 
        }
    }
    cout << "YES\n";
    for (int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;   
}
