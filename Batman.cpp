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

const int N = 55;
string a, b, c;
int x, y, z;
int dp[N][N][N];

int f(int i,int j,int k){
    if(i==x or j==y or k==z){
        return 0;
    } 
    int &ans = dp[i][j][k];
    if(ans!=-1){
        return ans;
    }
    if(a[i]==b[j] and b[j]==c[k]){
        ans = f(i + 1, j + 1, k + 1)+1;
    }
    else{
        ans = max({ans, f(i, j, k + 1),f(i, j+1, k),f(i+1, j, k)});
    }
    return ans;
}

void solve(int test) {
    cin >> a >> b >> c;
    x = a.size();
    y = b.size();
    z = c.size();
    memset(dp, 0, sizeof dp);
    // cout <<"Case "<<test<<": "<< f(0, 0, 0) << "\n";
    for (int i = x - 1; i > -1;i--){
        for (int j = y - 1; j > -1;j--){
            for (int k = z - 1; k > -1;k--){
                int &ans = dp[i][j][k];
                if(i==x or j==y or k==z){
                    ans = 0;
                }
                else{
                    if(a[i]==b[j] and b[j]==c[k]){
                        ans = dp[i+1][j+1][k+1] + 1;
                    }
                    else{
                        ans = max({dp[i][j][k + 1], dp[i][j + 1][k], dp[i + 1][j][k]});
                    }
                }
                
            }
        }
    }
    cout <<"Case "<<test<<": "<< dp[0][0][0] << "\n";
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
