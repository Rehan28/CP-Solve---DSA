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

//Muku28
int v[1000][1000];
int vsi[1000][1000];
int n, m;

int dfs(int i,int j)
{
    int res = v[i][j];
    vsi[i][j] = 1;
    if(i!=0 and v[i-1][j]>0 and vsi[i-1][j]==0)
    {
        res += dfs(i - 1, j);
    }
    if(i!=n-1 and v[i+1][j]>0 and vsi[i+1][j]==0)
    {
        res += dfs(i + 1, j);
    }
    if(j!=0 and v[i][j-1]>0 and vsi[i][j-1]==0)
    {
        res += dfs(i , j-1);
    }
    if(j!=m-1 and v[i][j+1]>0 and vsi[i][j+1]==0)
    {
        res += dfs(i , j+1);
    }
    return res;
}
int main()
{
    Muku28(); 
     int t;
    cin>>t;
   while(t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < m;j++)
            {
              
                cin>>v[i][j];
                vsi[i][j] = 0;
            }
        }
        int res = 0;
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < m;j++)
            {
                if(v[i][j]>0 and vsi[i][j]==0)
                {
                    res = max(dfs(i, j), res);
                }
            }
        }
        cout << res << "\n";
    }
  return 0;
 }