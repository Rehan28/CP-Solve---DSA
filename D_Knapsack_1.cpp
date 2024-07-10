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

const int N1 = 105;//100 element thakbe bolche
ll val[N1], w[N1];
ll dp[N1][100005];
ll n,W;

ll knapsack(ll i,ll weight){//time complexity is O(i*weight) karon ato gula state hoite pare
    if(i==n+1){
        return 0;
    }
    if(dp[i][weight]!=-1){
        return dp[i][weight];
    }
    ll ans = knapsack(i + 1, weight);// ai state ta na nile
    if(weight+w[i]<=W){
        //nibe tar age check korbo W ar kom ache kina
        ans = max(ans, knapsack(i + 1, weight + w[i]) + val[i]);
    }
    return dp[i][weight] = ans;
}
 
void solve(int test) {
    //int n;
    cin>>n>>W;
    //cout<<fibo_dp(20)<<"\n";// top down
    //fibo_itaretive(20);// bottom up
    //memset(step, -1, sizeof step);// ata step ar sob gular value -1 kore dey
    //cout << min_step(n) << "\n";
    //min_step_itretive(n); //same ans
    // memset(way, -1, sizeof way);
    // cout << num_way(n) << "\n";//1 3 and 3 1 different way
    // memset(way2, -1, sizeof way2);
    // cout << num_way2(n) << "\n";
    memset(dp, -1, sizeof dp);
    for (int i = 1; i <= n;i++){
        cin >> w[i] >> val[i];
    }
    cout << knapsack(1, 0); // 1 indexing
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
