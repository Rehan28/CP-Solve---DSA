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

const int N = 105;
string s, c;
int n, m;
string dp[N][N];
bool vis[N][N];

//lexicographical smallest LCS 
string f(int i,int j){
    if(i==n or j==m){
        return "";
    }
    string &ans = dp[i][j];
    if(vis[i][j]){
        return ans;
    }
    ans = "";
    if(s[i]==c[j]){
        ans += s[i];
        ans += f(i + 1, j + 1);
    }
    else{
        string ss = f(i + 1, j);
        int x = ss.size();
        string ss1 = f(i, j+1);
        int x1 = ss1.size();
        if(x>x1){
            ans += ss;
        }
        else if(x1>x){
            ans += ss1;
        }
        else{
            if(ss<=ss1){
                ans += ss;
            }
            else{
                ans += ss1;
            }
        }
    }
    vis[i][j] = true;
    return ans;
}

void solve(int test) {
    cin >> s >> c;
    n = s.size();
    m = c.size();
    memset(vis,false,sizeof vis);
    string ans = f(0, 0);
    cout << "Case " << test << ": ";
    if(ans.size()){
        cout << ans << "\n";
    }
    else{
        cout << ":(\n";
    }
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
