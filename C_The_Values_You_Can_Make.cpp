#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
//#define int long long

const int N = 505;
set<int> res;
bool dp[N][N][N];
int a[N];

int n,k;


void f(int i,int sum,int x){
    if(sum==k){
        res.insert(x);
        return;
    }
    if(sum>k or i==n or dp[i][sum][x]){
        return;
    }
    dp[i][sum][x]= true;
    f(i+1,sum,x);
    f(i + 1, sum + a[i], x);
    f(i + 1, sum + a[i], x + a[i]);
}

void solve(int test) {

    cin >> n >> k;
    cin(a, n);
    //memset(dp,-1,sizeof(dp));

    f(0,0,0);
    cout<<res.size()<<nl;
    for (auto x:res){
        cout<<x<<" ";
    }
    cout << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
