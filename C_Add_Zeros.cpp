#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

const int N = 3e5 + 9;
map<int, vector<int>> mp;
map<pair<int, int>, int> dp;
int f(int n,int pos){
    if(mp[n].size()==0){
        return n;
    }
    int ans = n;
    if(dp[{n,pos}]!=0){
        return dp[{n, pos}];
    }
    for (int i = 0; i < mp[n].size();i++){
        int x = mp[n][i];
        if(x==0){
            continue;
        }
        ans = max(ans, f(n+x,i));
    }
    dp[{n, pos}] = ans;
    return dp[{n,pos}];
}

void solve(int test) {
    int n;
    cin>>n;
    int b[n];
    for (int i = 1; i <= n;i++){
        int a;
        cin >> a;
       
        int x = a + i; 
        b[i-1] = x;
        mp[x].push_back(i - 1);
    }
    int ans = f(n + 1,-1);
    cout << ans-1 << "\n";
    for (int i = 0; i < n;i++){
        mp[b[i]].clear();
    }
    dp.clear();
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
