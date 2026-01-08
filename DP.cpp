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

//Recursion 
/*recursion nia aktu*/
// recursion a space complexity O(n);
// karon stack a max n ta e jabe
//cycle thakle dp kaj kore na

//#fibonacci
//onek boro number ase
int fibo(int i){//2^n pry
    if(i==0)
        return 0;
    if(i==1)
        return 1;
    return fibo(i - 1) + fibo(i - 2);
}

const int N = 1e5+9;
ll f[N];
bool is_cal[N];

ll fibo_dp(int i){//O(n)
// atake bole top down
    if(i==0)
        return 0;
    if(i==1)
        return 1;
    if(is_cal[i]){
        return f[i];
    }
    f[i] = fibo_dp(i - 1) + fibo_dp(i - 2);
    is_cal[i] = true;
    return f[i];
}

void fibo_itaretive(int n){
    //O(n) recursive ar caya aktu fast
    int ff[n + 1];
    ff[0] = 0;
    ff[1] = 1;
    for (int i = 2; i <= n;i++){
        ff[i] = ff[i - 1] + ff[i - 2];
    }
    cout << ff[n] << "\n";
}

//##Problem 1 --> Minimum Steps to Reach 1
/*given n you can perform 3 types of operation any number of time to make this number to 1
    1) reduce 1 (n-1);
    2) if n%2==0 then n /=2;
    2) if n%3==0 then n /=3;
make n = 1;minimum number of operation
*/
int step[N];
int min_step(int n){
    if(n==1)
        return 0;//then we need 0 operation
    int ans = min_step(n - 1) + 1;//n-1 ar step
    if(step[n]!=-1){
        return step[n];//memorization
        //ai state a age gachilam
    }
    if(n%2==0){
        ans = min(ans, min_step(n / 2) + 1);
    }
    if(n%3==0){
        ans = min(ans, min_step(n / 3) + 1);
    }
    step[n] = ans;
    return step[n];
}

void min_step_itretive(int n){
    step[1] = 0;
    for (int i = 2; i <= n;i++){
        int ans = step[i - 1] + 1;
        if(i%2==0){
            ans =  min(ans, step[i/2] + 1);
        }
        if(i%3==0){
            ans =  min(ans, step[i/3] + 1);
        }
        step[i] = ans;
    }
    cout << step[n] << "\n";
}

//## Problem 2 --> Number of ways
/*Find the number of ways to write n as sums of 1 and 3.
n = 1e5 so print modulo 
*/
int way[N];
int num_way(int i){
   
    if(i==1 or i==2){
        way[i] = 1;
        return 1;
    }
    if(i==3){
        way[i] = 2;
        return 2;
    } 
    if(way[i]!=-1){
        return way[i];
    }
    way[i] = (num_way(i - 1)%mod + num_way(i - 3)%mod) % mod;
    return way[i];
}

//#prioblem 3--> Number of Ways 2
/* same problem 1 and 3 na sudu any integer ar sum*/
int way2[N];
int num_way2(int i){
    // n state ar modde abar n colteche, O(n^2);
    if(i==0 or i==1)
        return 1;
    if(i==2)
        return 2;
    if(way2[i]!=-1){
        return way2[i];
    }
    way2[i] = 0;
    for (int k = i; k > 0;k--){//n-k dakhbo
        way2[i] += num_way2(i - k);
        //way2 %= mod;
        //1-i e hobe max
    }
    return way2[i];
}

//#Problem 4 --> 0/1 knapsack 
/*There are N items, numbered 1,2,…,N. For each i (1≤i≤N), Item i has a weight of w[i]
​and a value of v[i] 
Find the maximum possible sum of the values of items that Taro takes home.
*/
const int N1 = 105;//100 element thakbe bolche
int val[N1], w[N1],W;
int dp[N1][100005];
int n;

int knapsack(int i,int weight){//time complexity is O(i*weight) karon ato gula state hoite pare
    if(i==n+1){
        return 0;
    }
    if(dp[i][weight]!=-1){
        return dp[i][weight];
    }
    int ans = knapsack(i + 1, weight);// ai state ta na nile
    if(weight+w[i]<=W){
        //nibe tar age check korbo W ar kom ache kina
        ans = max(ans, knapsack(i + 1, weight + w[i]) + val[i]);
    }
    return dp[i][weight] = ans;
}

// ata note --> int32_t use kora valo
// sob gula ll kora lagle just define int long long ai somoy int32_t main() use korbo

//#problem 5 --> DP on Matrix
/*
 n*m matrix find minimum cost path 1,1 to n,m
*/
const int N = 1e2 + 9;
int a[N][N];
int n,m;
int dp[N][N];

int min_cost(int i,int j){
    //complexity n*m karon max n*m a jailye hobe
    if(i==n and j==m){
        return a[i][j];
    }
    if(i>n or j>m){
        return mod;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    return dp[i][j] = a[i][j] + min(min_cost(i + 1, j), min_cost(i, j + 1));
}

// Path print kamne korbo
void path(int i,int j){
    cout << '(' << i << ',' << j << ')' << "->";
    if(i==n and j==m){
        return;
    }
    int right = min_cost(i, j + 1);// ata joto bar e call kori ata o(1) a kore dicche
    // karon dp agye save kore rakhche
    int down = min_cost(i + 1, j);
    if(right<=down){
        path(i, j + 1);
    }
    else{
        path(i + 1, j);
    }
}

//##[Problem 8] - 6 Longest Common Subsequence(LCS)
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

//#called printing a dp or dp element

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

//#DP on Acyclic Graphs (Easy Version)

/* LONGEST PATH AR AKTA GRAPH*/
int long_path(int u){

    int &ans = dp[u];
    if(ans!=-1){
        return ans;
    }
    ans = 0;
    for(auto v:g[u]){
        ans = max(ans, long_path(v)+1);
    }
    return ans;
}

void solve(int test) {
    int u, v;
    cin >> u >> v;
    for (int i = 0; i < v;i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
    }
    int ans = 0;
    memset(dp, -1, sizeof dp);
    for (int i = 1; i <= u;i++){
        ans = max(ans, long_path(i));
    }
    cout << ans << "\n";
}

//#Dp on Tree (Easy Version)

/* Given a rooted tree with n nodes. Find the sizes of all substrees in O(n).
    subtree bole akta node ar niche koyta node ache amon bujay 
*/
    void dfs(int u,int p){
        for(auto v : g[u]){
            if(v!=p){
                dfs(v,u);
                dp[u] += dp[v];
                // akhnae amra dp kore kaj korte pari
            }
        }
    }
/*akta tree ar pasapasi node a balck kora jabe na sob node white and black koyvabe kora jay*/\
void dfs(int u,int parent){
    dp[u][0] = 1;// akta node white hole akbar
    dp[u][1] = 1;// balck hole akbar
    for(auto v:g[u]){
        if(v!=parent){//v jate parent a na jay tree te ata korlye hoy
        //dfs kore last a jaia ans nia asteche
            dfs(v, u);
            dp[u][0] = (1LL*dp[u][0] * (dp[v][0] + dp[v][1]) %mod)%mod;
            // akane u k white rekhe j koyta v ache tader white and black ar sum and u ar jono
            //gula node avhe tader multiple
            dp[u][1] = ( 1LL * dp[u][1]*dp[v][0]) %mod;
            //black sudu tader child ar while gula nibe
        }
    }
}

//Longest Increasing Subsequence(LIS)

const int N = 1e3 + 9;
int dp[N];
void solve(int test) {//LIS = longest increasing Subsequence
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    for (int i = 0; i < n;i++){
        for (int j = 0; j < i;j++){
            if(a[j]<a[i]){  
                dp[i] = max(dp[j], dp[i]);
            }
        }
        dp[i]++;
    }
    //O(n*n)
    int length = 0;
    for (int i = 0; i < n;i++){
        length = max(length, dp[i]);
    }
    cout << length << "\n";
}


void solve(int test) {
    int n;
    cin>>n;
    for (int i = 0; i < n - 1;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout <<(dp[1][0]+dp[1][1])%mod<< '\n';
}

void solve(int test) {
    cin>>n>>m;
    for (int i = 1; i <= n;i++){
        for (int j = 1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    memset(dp, -1, sizeof dp);
    cout << min_cost(1, 1) << "\n";
    path(1, 1);
}
//# memory optimization 
/* Coin - problem basi state use na kore kom state use kora jay*/
/* 
    iterative much faster.
    long long 2x slower and memory basi khay karon ll a 16 bit kore calculate kora lage tai slow
    int a n*4 byte hoy ar ll a n*8 byte hobe tai memory limit o exit hobe
    ** kono 2 and 3d arrayte paramiter a borota pore debo
    jamon dp[min][max]
    karon memory te acces a subida hoy ...... amon thake
    recursive a memory optimization kora jay na.
     
   **Coin problem ta best bojar jonno memory optimization ar jonno


*/
//time optimization
/*LIS dia optimization ta bujano hoiche*/
// Code Increasing Subsequence  atay solbe ache


void solve(int test) {
    //int n;
    cin>>n;
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
    cin >> W;
    for (int i = 1; i <= n;i++){
        cin >> w[i] >> val[i];
    }
    cout << knapsack(1, 0); // 1 indexing
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
