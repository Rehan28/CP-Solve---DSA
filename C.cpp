#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

const int N = 1e3 + 9;
int a[N][N];

void solve(int test) {
    int n,m;
    cin>>n>>m;
    bool vis[n][m];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
            vis[i][j] = false;
        }
    }
    int ans = 0;
    for (int i = 1; i < n-1;i++){
        for (int j = 1; j < m-1;j++){
            if(!vis[i][j]){
                int c = 0;
                int sum = 1;
                for (int k = i + 1; k < n;k++){
                    if(a[i][j]!=a[k][j]){
                        break;
                    }
                    sum++; 
                    if(c==0){
                        c++;
                    }
                }
               
                for (int k = i - 1; k>-1;k--){
                    if(a[i][j]!=a[k][j]){
                        break;
                    }
                    sum++;
                    if(c==1){
                        c++;
                    }
                }
                
                for (int k = j+1; k < m;k++){
                    if(a[i][j]!=a[i][k]){
                        break;
                    }
                    sum++;
                    if(c==2){
                        c++;
                    }
                }
                for (int k = j - 1; k>-1;k--){
                    if(a[i][j]!=a[i][k]){
                        break;
                    }
                    sum++;
                    if(c==3){
                        c++;
                    }
                }
                
                if(c==4){
                    ans = max(ans, sum);
                    for (int k = i + 1; k < n;k++){
                        if(a[i][j]!=a[k][j]){
                            break;
                        }
                        vis[k][j] = true;
                    }
                    for (int k = i - 1; k>-1;k--){
                        if(a[i][j]!=a[k][j]){
                            break;
                        }
                       vis[k][j] = true;
                    }
                    for (int k = j+1; k < m;k++){
                        if(a[i][j]!=a[i][k]){
                            break;
                        }
                        vis[i][k] = true;
                    }
                    for (int k = j - 1; k>-1;k--){
                        if(a[i][j]!=a[i][k]){
                            break;
                        }
                        vis[i][k] = true;
                    }
                }
            }
        }
    }
    cout <<"Case "<<test<<": "<< ans << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
