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
ll mod = 10e9 + 7;
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll n,m;
        cin>>n>>m;
       vector<ll> v[m];
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
           {
            int x;
            cin>>x;
            v[j].push_back(x);
           }
        }
        ll sum = 0;
        for(int i=0;i<m;i++)
        {
            ll x = 0;
            sort(v[i].begin(),v[i].end());
            for(int j=0;j<n;j++)
            {
                x += v[i][j];
            }
            //cout<<x<<"\n";
            ll y = n-1;
            for(int j=0;j<n-1;j++)
            {
                ll res = x - v[i][j];
                res -= (v[i][j]*y);
                y--;
                sum += res;
                x -= v[i][j];
            }
             //cout<<sum<<"\n";
        }
        cout<<sum<<"\n";
        
    }
  return 0;
 }