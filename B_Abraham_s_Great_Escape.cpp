#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;
    
    if(0){
        cout<<"NO\n";
    }
    else{
        
        char s[n+1][n+1];
        int v[n+2][n+2];
        for(int i=0;i<=n+1;i++){
            for(int j=1;j<=n;j++){
                v[i][j]=0;
                if(i==n+1 or i==0 or j==0 or j==n+1){
                   v[i][j]=1;
                }
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                s[i][j] = '@';
                if(k==0){
                    if(v[i-1][j]==0){
                        s[i][j] = 'U';
                    }
                    else if(v[i+1][j]==0){
                        s[i][j] = 'D';
                    }
                    else if(v[i][j-1]==0){
                        s[i][j] = 'L';
                    }
                    else if(v[i][j+1]==0){
                        s[i][j] = 'R';
                    }
                }
                else{
                    if(v[i-1][j]==1){
                        s[i][j] = 'U';
                    }
                    else if(v[i+1][j]==1){
                        s[i][j] = 'D';
                    }
                    else if(v[i][j-1]==1){
                        s[i][j] = 'L';
    
                    }
                    else if(v[i][j+1]==1){
                        s[i][j] = 'R';
        
                    }
                    k--;
                    v[i][j]=1;
                }
            if(s[i][j] != 'U' and s[i][j] != 'D' and s[i][j] != 'L' and s[i][j] != 'R'){
                cout<<"NO\n";
                return;
            }
        }
        }
        cout<<"YES\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<s[i][j];
            }
            cout<<nl;
        }
        
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
