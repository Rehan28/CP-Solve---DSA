// Author:  Rajesh Biswas
// Date  :  19.09.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(Order_set)----------------------------------------------
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using o_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;*/
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define No cout << ("No\n")
#define NO cout << ("NO\n")
#define Yes cout << ("Yes\n")
#define YES cout << ("YES\n")
#define nl cout << ("\n")
#define rrr return
#define fi first
#define sc second
#define rrr return
#define pb(x) push_back(x)
#define ppb(x, y) push_back({x, y})

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define contains(a, b) (find(all(a), (b)) != (a).end())

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 9000000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 200009
//------------------------------------------------------------------------------------
vector<ll> g[N], val(N);
bool vis[N], vism[N];
multiset<ll> mn,temp;

void dfs(ll i)
{
    vis[i] = true;
    temp.insert(val[i]);
    for (auto it : g[i])
    {
        if (vis[it])
            continue;
        dfs(it);
    }
}



void solve(void)
{
    ll n, m;
    cin >> n >> m;
    f(i, 0, n) cin >> val[i];

    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }


    vector<pair<int,int>> v;
    for (int i = 0; i < n;i++){
        if(!vis[i]){
            dfs(i);
        }
        int x = temp.size();
        if(x!=0){
            v.push_back(make_pair(x, i));
            temp.clear();
        }
    }
    int ans = 0;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());


    
    for (int i = 1; i <= n;i++){
        vis[i] = false;
    }
    dfs(v[0].second);
    for (auto x : temp){
        mn.insert(x);
        //cout << x << "\n";
    }
    temp.clear();
    int mm = *mn.begin();
    mn.erase(mn.find(m));
    n = v.size();

    // for (int i = 1; i < n ;i++){
    //     if(mn.size()==0){
    //         cout << "Impossible\n";
    //         return;
    //     }
    //     dfs(v[i].second);
    //     int mx = *temp.begin();
    //     ans += (mm + mx);
    //     for(auto x:temp){
    //         mn.insert(x);
    //     }
    //     mn.erase(mn.find(mx));
    //     if(mn.size()!=0){
    //         mm = *mn.begin();
    //     }
    // }
    cout << ans<<"\n";
}
//------------------------------------------------------------------------------------
int main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/
