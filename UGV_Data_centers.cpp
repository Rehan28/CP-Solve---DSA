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
//Muku28

int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,m,s,T;
        cin>>n>>m>>s>>T;
        Graph g(m);
        for(int i=0;i<m;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            g.addEdge(x,y,z);
        }
        cout <<  g.findShortestPath(s,T);
    }
  return 0;
 }