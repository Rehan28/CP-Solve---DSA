#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0;j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 and j==0 or(i==0 and j==m-1) or (i==n-1 and j==0) or (i==n-1 and j==m-1)){
                if(a[i][j]>2){
                    cout << "NO\n";
                    return;
                }
                a[i][j] = 2;
            }
            else if(i==0 or j==0 or i==n-1 or j==m-1){
                if(a[i][j]>3){
                    cout << "NO\n";
                    return;
                }
                a[i][j] = 3;
            }
            else{
                if(a[i][j]>4){
                    cout << "NO\n";
                    return;
                }
                a[i][j] = 4;
            }
        }
    }
    cout << "YES\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << nl;
    }
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
