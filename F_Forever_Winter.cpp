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
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int v, e;
        cin >> v >> e;
        vector<int> g[10000];
        for (int i = 0; i < e;i++)
        {
            int a, b;
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        bool f = false;
        int res1 = -1;
        int res2 = -1;
        for (int i = 1; i <= v;i++)
        {   
            res1 = -1;
            res2 = -1;
            res1 = g[i].size();
            set<int> st;
            
            for (int j = 0; j < g[i].size();j++)
            {
                int y = g[i][j];
                //cout << i<<" "<<y <<" "<<g[y].size()<< "\n";
                st.insert(g[y].size()-1);
            }
            if(st.size()==1)
            {
                auto it = st.begin();
                res2 = *it;
            }
            if(res1>1 and res2>1)
            {
                f = true;
                break;
                //cout << i << "\n";
               //cout << res1 << " " << res2 << "\n";
            }
        }
        if(f)
        {
            cout << res1 << " " << res2 << "\n";
        }
    }
  return 0;
 }