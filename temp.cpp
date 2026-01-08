//Temp :: PSTU_Array_Of_Hope

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}#define nl "\n"#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;#define yes cout << "YES"<<nl;#define mod 1000000007
void solve(int test) {
  int n;cin>>n;int a[n];cin(a,n);
}
int main() {
  Muku28();int test=1;cin>>test;for(int i=1;i<=test;i++) {solve(i);}
  return 0;
}
//SET : 
#####ordered set<>
#include <ext/pb_ds/assoc_container.hpp>//gcc thik korly jamela kore na
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

ordered_set o_set;   // Ordered set declared with name o_set
o_set.insert(4);
*(o_set.find_by_order(1))////  find_by_order returns an iterator
    cout << *(o_set.find_by_order(1))o_set.order_of_key(5)//cout,strictly less
    // than 5 if integers are present
//Max Ture : 
while (lo < hi) {
		int mid = lo + (hi - lo + 1) / 2;
		if (f(mid)) {
			lo = mid;
		} else {
			hi = mid - 1;
		}
	}
	return lo;
//MIN TRUE :
while (lo < hi) {
		if (f(mid)) {
			hi = mid;
		} else {
			lo = mid + 1;
		}
	}return lo;
	//NT : 
	//prime factor
	for (int i = 2; i * i <= n;i++){
        if(n%i==0){
            while (n%i==0){v.push_back(i);n = n / i;}}}
//Seive : 
void Osieve(){
    int n = 1e8;// O(nloglogn)
    vector<int> prime;
    for (int i = 2; i*i <= n;i++){
        if(!f[i]){
            for (int j = i * i; j <= n;j = j+i){//i*i korte pari karon i+i ta laready tar ager
            // prime a mark kore dice
                f[j] = true;
            }
        }
    }
}      
 //Lazy : 
 const int N = 1e5 + 9;
int a[N];
int t[4 * N], lazy[4 * N];

void push(int n,int b,int e){
    if(lazy[n]==0){
        return;
    }
    t[n] = t[n] + 1LL*(e - b + 1) * lazy[n];
    if(b!=e){
       int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
       lazy[l] += lazy[n];
       lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}
void build(int n,int b,int e){
    if(b==e){
        t[n] = 0;//akhane first a sob value 0 thakbe
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}
void update(int n,int b,int e,int i,int j,int v){
    push(n, b, e);// ai push ta important kintu akhono bujina kano
    if(j<b or i>e){
        return;
    }
    if(b>=i and e<=j){
        lazy[n] = v;
        push(n, b, e);// ata push kora hoy nai akhono
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid+1, e, i, j, v);
    t[n] = t[l] + t[r];
}
int query(int n,int b,int e,int i,int j){
    push(n, b, e);
    if(j<b or i>e){
        return 0;
    }
    if(b>=i and e<=j){
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
------------------------------------------

//####   Topological sort
kono akta kajer scheduling korara jonno directed graph a use kora hoy.kon kajta kontar age asbe seta.
int indegree[N];
void toposort(){
    int n = 4;
    for (int i = 1; i <= n;i++){//m porjonto hoy
        int u, v;
        cin >> u >> v;//u theke v te jabe
        g[u].push_back(v);
        indegree[v]++;
    } vector<int> z;
    for (int i = 1; i <= n;i++){
        if(indegree[i]==0){
            z.push_back(i);
            vis[i] = true;
        }
    }vector<int> ans;
    while (ans.size()<n){
        if(z.size()==0){
            cout << "IMPOSSIBLE\n";
            return;
        }
        int u = z.back(); // atar jonno O(V+E);
        z.pop_back();
        ans.push_back(u);
        vis[u] = true;
        for(auto x : g[u]){
            indegree[x]--;
            // porer indegree zero hobe asob ar modde dia e 
            // karon arai komche
            if(!vis[x] and indegree[x]==0){
                z.push_back(x);
            }}} 
}
void find_cycle(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        gr[u].push_back(v);
    }cycle = false;
    for (int i = 1; i <= n;i++){
        if(col[i]==0){//that means not visited
            cycle_dfs(i);}
    }if(cycle){yes;}
}

//dp
0/1 knapsack 
/*There are N items, numbered 1,2,…,N. For each i (1≤i≤N), Item i has a weight of w[i]
and a value of v[i] 
Find the maximum possible sum of the values of items that Taro takes home.
*/
const int N1 = 105;//100 element thakbe bolche
int val[N1], w[N1],W;
int dp[N1][100005];
int n;
int knapsack(int i,int weight){//time complexity is O(i*weight) karon ato gula state hoite pare
    if(i==n+1){
        return 0;}
    if(dp[i][weight]!=-1){
        return dp[i][weight];}
    int ans = knapsack(i + 1, weight);// ai state ta na nile
    if(weight+w[i]<=W){
        //nibe tar age check korbo W ar kom ache kina
        ans = max(ans, knapsack(i + 1, weight + w[i]) + val[i]);} return dp[i][weight] = ans;
}
//DP on Matrix
 n*m matrix find minimum cost path 1,1 to n,m
const int N = 1e2 + 9;
int a[N][N];
int n,m;
int dp[N][N];
int min_cost(int i,int j){//complexity n*m karon max n*m a jailye hobe
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
// Path print
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

##hash
//#double hashing templet
const int N = 1e5 + 9, p1 = 137, p2 = 277, mod1 = 1e9 + 7, mod2 = 1e9 + 9; // p prime
pair<int, int> pw[N];
void precal(){
    pw[0] = {1,1};
    for (int i = 1; i < N;i++){
        pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
        pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
    }
}
pair<int,int> gethash(string s){
    int n = s.size();
    pair<int, int> hs({0, 0});
    for (int i = 0; i < n;i++){
        hs.first += (1LL * s[i] * pw[i].first % mod1);
        hs.first %= mod1;
        hs.second += (1LL * s[i] * pw[i].second % mod2);
        hs.second %= mod2;
    }
    return hs;
}
//##double substring hashing
const int N = 1e6 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;
//Big mod
int power(long long n, long long k, int mod) {
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}
//build prime and inverse prime
int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void precal() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
  }
  ip1 = power(p1, mod1 - 2, mod1);
  ip2 = power(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
  }
}
//full string hash
pair<int, int> string_hash(string s) {
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += 1LL * s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += 1LL * s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}
//build prefix
pair<int, int> pfx[N];
void build(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    pfx[i].first = 1LL * s[i] * pw[i].first % mod1;
    if (i) pfx[i].first = (pfx[i].first + pfx[i - 1].first) % mod1;
    pfx[i].second = 1LL * s[i] * pw[i].second % mod2;
    if (i) pfx[i].second = (pfx[i].second + pfx[i - 1].second) % mod2;
  }
}
//Sub string prefix
pair<int, int> sub_string_hash(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pfx[j].first;
  if (i) hs.first = (hs.first - pfx[i - 1].first + mod1) % mod1;
  hs.first = 1LL * hs.first * ipw[i].first % mod1;
  hs.second = pfx[j].second;
  if (i) hs.second = (hs.second - pfx[i - 1].second + mod2) % mod2;
  hs.second = 1LL * hs.second * ipw[i].second % mod2;
  return hs;
}
void solve(int test) {
    string s;
    cin >> s;
    precal();//must dite hobe
    build(s);//must dite hobe
    cout << sub_string_hash(0, 1).first << " " << sub_string_hash(0, 1).second << "\n";
    cout << sub_string_hash(3, 4).first << " " << sub_string_hash(3, 4).second << "\n";
    cout << (sub_string_hash(0, 1) == sub_string_hash(3, 4)) << "\n";
}


//phi
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    for (int i = 0; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
int getBit(int n,int i){
    return (n & (1 << i));//Left shift
}
int setBit(int n,int i){
    return (n | (1 << i));
}int clearBit(int n,int i)
{
    return (n & ~(1 << i));// ~NOT operation
}int updateBit(int n,int i,int value){
     n = clearBit(n, i);
     return (n | (value << i));
}
//Parity permutations:
   ordered_set<ll> st;
   vector<ll> v(n + 1);
   for (ll i = 0; i < n; i++)
   {
       ll x;
       cin >> x;
       st.insert(x);
       ll r = st.order_of_key(x);
       a += r;
   }
//Difference array in 2D vector:
for (ll row = 1; row <= n - k + 1; row++)//k is the limit.value increase upto row+k && col+k
        {
            for (ll cnt = 0; cnt < k; cnt++)
            {
                for (ll col = 1; col <= m - k + 1; col++)
                {
                    v[row + cnt][col]++;
                    v[row + cnt][col + k]--;
                }
            }
        }
//Mask:
for (ll i = 0; i <= (1 << n); i++)
{
    for (ll j = 31; j >= 0; j--)
    {
        if (i & (1 << j))
        {
            //for true condition
        }
    }
}
//For 1 to N all number ETF:O(N logN)
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i - 1;


    for (int i = 2; i <= n; i++)
        for (int j = 2 * i; j <= n; j += i)
              phi[j] -= phi[i];
}


//Next permutations:
do
 {
     //Code on vector v
 } while (next_permutation(v.begin(), v.end()));//prev_permutaion
//LIS:
Only LIS size: 
int lis(const vector<int> &a)
{
    vector<int> lis_vec;
    lis_vec.pb(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > lis_vec.back())
            lis_vec.pb(a[i]);
        else
        {
            int low = lower_bound(lis_vec.begin(), lis_vec.end(), a[i]) -             lis_vec.begin();
            lis_vec[low] = a[i];
        }
    }
    return lis_vec.size();
}
int lis(vector<int> const& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;


    for (int i = 0; i < n; i++) {
        int l = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[l-1] < a[i] && a[i] < d[l])
            d[l] = a[i];
    }


    int ans = 0;
    for (int l = 0; l <= n; l++) {
        if (d[l] < INF)
            ans = l;
    }
    return ans;
}
//Gve the LIS:
vector<int> findLongestIncreasingSubsequence(const vector<int> &sequence)
{
    int n = sequence.size();
    const int INF = 1e9;
    vector<int> smallestEndAtLength(n + 1, INF), indexAtLength(n + 1, -1), previousElement(n, -1);
    smallestEndAtLength[0] = -INF;
    int maxLength = 0;        
    int lastElementIndex = -1;
    for (int i = 0; i < n; i++)
    {
        int length = upper_bound(smallestEndAtLength.begin(), smallestEndAtLength.end(), sequence[i]) - smallestEndAtLength.begin();
        if (smallestEndAtLength[length - 1] < sequence[i] && sequence[i] < smallestEndAtLength[length])
        {
            smallestEndAtLength[length] = sequence[i];      
            indexAtLength[length] = i;                    
            previousElement[i] = indexAtLength[length - 1];
            if (length > maxLength)
            {
                maxLength = length;
                lastElementIndex = i;
            }
        }
    }
    vector<int> longestSubsequence;
    for (int i = lastElementIndex; i >= 0; i = previousElement[i])
    {
        longestSubsequence.pb(sequence[i]);
    }
    reverse(all(longestSubsequence));
    return longestSubsequence;
}
//Dijkstra:
const ll N = 1e5 + 10;
const ll INF = 1e9 + 10;
vector<vector<pair<ll, ll>>> gph(N);
vector<bool> vis(N);
vector<ll> dist(N, INF);
void dijkstra(int source)
{
    set<pair<ll, ll>> st;
    st.insert({0, source});
    dist[source] = 0;
    while (st.size() > 0)
    {
        auto p = *st.begin();
        ll par = p.second;
        ll wt = p.first;
        st.erase(st.begin());
        if (vis[par])
            continue;
        vis[par] = true;
        for (auto child : gph[par])
        {
            ll child_v = child.first;
            ll child_wt = child.second;
            if (dist[par] + child_wt < dist[child_v])
            {
                st.erase({dist[child_v], child_v});
                dist[child_v] = dist[par] + child_wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
}
//LCA:
const ll N = 1e5 + 10;
vector<vector<ll>> gph(N), path(N);
vector<bool> vis(N);
vector<ll> par(N);
//dfs part
void dfs(int vertex)
{
    vis[vertex] = true;
    for (auto child : gph[vertex])
    {
        if (vis[child])
            continue;
        par[child] = vertex;
        dfs(child);
    }
    vector<ll> cnt;
    ll x = vertex;
    while (x != 1)
    {
        cnt.pb(x);
        x = par[x];
    }
    cnt.pb(1);
    reverse(all(cnt));
    path[vertex] = cnt;
}
//determine LCA
ll siz = min(path[v1].size(), path[v2].size()), lca = -1;
    for (ll i = 0; i < siz; i++)
    {
        if (path[v1][i] == path[v2][i])
        {
            lca = path[v1][i];
        }
        else
            break;
    }
//Kadan’s Algorithm:
ll sum = 0, ma = -1e9;
   for (ll j = 0; j < n; j++)
   {
       sum = max(sum + v[j], v[j]);
       ma = max(ma, sum);
   }
//Subset generate by Recursion:
vector<ll> q;
void subset(int ind, ll size, vector<ll> v)
{
    if (ind == size)
    {
        for (ll i = 0; i < q.size(); i++)
        {
            cout << q[i] << " ";
        }
        cout << '\n';
        return;
    }
    q.pb(v[ind]);
    subset(ind + 1, size, v);
    q.pop_back();
    subset(ind + 1, size, v);
}