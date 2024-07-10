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
string s, c;
int n,m;
const int N = 5009;
const int inf = 1e9;
int dp[N][N];

//Min operation to convert s to c
int f(int i,int j){ // O(n*m);
    if(i==n and j==m){
        return 0;
        // kaj ses
    }
    if(i==n){
        // j akhono vitore so
        return m - j;
        // ai koyta s a add korlye hobe
    }
    if(j==m){
        // i vitore
        return n - i;
    }
    int &ans = dp[i][j];
    if(ans!=-1){
        return ans;
    }
    ans = inf;
    if(s[i]==c[j]){
        ans = min(ans,f(i + 1, j + 1));//jodi soman hoy
    }
    else{
        ans = min(ans, f(i + 1, j + 1) + 1); // jodi sudu replace kori
        // tar mane c[j] ta replace korlye hobe
        ans = min(ans, f(i, j + 1) + 1);// jodi add kore
        // s[i]!=c[j] toh c[j] ar okhane kiche akta add korbo toh next move hobe j+1 a ar 
        // i ar age add korchi toh i e thakbe akhon
        ans = min(ans, f(i + 1, j) + 1);// remove kori
    }

    /* jodi soman hoy oitai best way j samne cole jaoa and onno somoy j  kono akta nia neoa
    else na dilyeo kaj korbe
    */
    return ans;
}

void solve(int test) {
    memset(dp, inf, sizeof dp);
    cin >> s >> c;
    n = s.size();
    m = c.size();
    //cout << f(0, 0) << "\n";
    int i = n-1;
    int j = m-1;
    dp[n][m] = inf;
    
    cout << dp[0][0] << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
