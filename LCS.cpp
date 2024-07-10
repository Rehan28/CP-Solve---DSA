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

const int N = 3e3 + 9;
string s, c;
int n, m;
int dp[N][N];

int lcs(int i,int j){
    if(i==n or j==m){
        return 0;
    }
    int &ans = dp[i][j];
    if(ans!=-1){
        return ans;
    }

    if(s[i]==c[j]){
        ans = lcs(i + 1, j + 1) + 1;
        //length 1
    }
    else{
        ans = lcs(i + 1, j);
        ans = max(ans, lcs(i, j + 1));
    }
    return ans;
}

void print(int i,int j){
    if(i==n or j==m){
        return;
    }
    if(s[i]==c[j]){
        cout << s[i];
        print(i + 1, j + 1);
        return;
    }
    int x = lcs(i + 1, j);
    int y = lcs(i, j + 1);
    if(x>=y){
        print(i + 1, j);
    }
    else{
        print(i, j + 1);
    }
}

void solve(int test) {
    cin >> s >> c;
    n = s.size();
    m = c.size();
    memset(dp, -1, sizeof dp);
    print(0, 0);
    cout << "\n";
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
