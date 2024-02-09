#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
vector<vector<ll>> v;
bool vis[100000];
//Muku28
// void dfs(int vertex)
// {
//     vis[vertex] = true;
//     cout << "parent " << vertex << "\n";
//     for(auto child : v[vertex])
//     {
//         if(vis[child]) continue;
//         cout << "child " << child << "\n";
//         dfs(child);
//     }
// }
vector<ll> cnt;
void dfs(ll start,ll parent) {
   if(v[start].size()==1 and v[start][0]==parent)
   {
       cnt[start] = 1;
   }
   else
   {
    for(auto child : v[start])
    {
        if(child!=parent)
        {
            dfs(child, start);
            cnt[start] += cnt[child];
        }
    }
   }
    
}
void Rehan()
{
    int n;
    cin>>n;
    v.assign(n+1, vector<ll>());
    for (int i = 0; i < n-1;i++)
    {
        ll x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
   
    cnt.assign(n+1, 0);
    dfs(1, -1);
    ll x;
    cin >> x;
    for (int i = 0; i < x;i++)
    {
        ll a, b;
        cin >> a >> b;
        ll res = cnt[a] * cnt[b];
        cout << res << "\n";
    }
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }