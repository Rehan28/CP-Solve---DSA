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
//Muku28
int main()
{
    Muku28();
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
   ll a[26] = {0};
    for(int i=0;i<n;i++)
    {
        ll x = s[i] - 65;
        a[x]++;
        //cout<<a[x]<<"\n";
    }
    sort(a,a+26);
    int y = 25;
    ll sum = 0;
   // dbg(a[y]);
    while(m>0)
    {
        //cout<<a[y]
        if(a[y]>m)
        {
            sum += (m*m);
            m = 0;
        }
        else
        {
            sum += (a[y]*a[y]);
            m -= a[y];
        }
        y--;
    }
    cout<<sum<<"\n";
  return 0;
 }