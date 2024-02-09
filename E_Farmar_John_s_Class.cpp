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
int mx = 1000005;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//Muku28
int Rehan()
{
    int n,m;
    cin>>n>>m;
    vector<int> v[n+1];
    for (int i = 0; i < m;i++)
    {
        int x, y;
        cin >> x>> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
   
    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }
 const int MAXN = 100005;

vector<int> adj[MAXN];
int team_assignment[MAXN];

bool dfs(int node, int current_team) {
    team_assignment[node] = current_team;

    for (int adj_student : adj[node]) {
        if (team_assignment[adj_student] == 0) {
            if (!dfs(adj_student, 3 - current_team)) {
                return false;
            }
        } else if (team_assignment[adj_student] == current_team) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; ++i) {
        if (team_assignment[i] == 0) {
            if (!dfs(i, 1)) {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << team_assignment[i] << " ";
    }
    cout << endl;

    return 0;
}
