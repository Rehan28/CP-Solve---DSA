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
ll mod1 = (10e9)*2;
//Muku28
int main()
{
    Muku28();
    ll l,r;
    cin>>l>>r;
    map<ll,ll> mp;
    ll sum = 2019;
    int x = 0;
    
    for(ll i=r;i>=2019;i--)
    {
        
        if((i%2019)==0)
        {
            x = i;
            break;
        }
    }
    if(x>(l))
    {
        cout<<0<<"\n";
    }
    else
    {
        ll xx = INT_MAX;
        
        for(ll i=l;i<r;i++)
        {
            for(int j=i+1;j<=r;j++)
            {
                //cout<<i<<" "<<j<<"\n";
                xx = min((i*j)%2019,xx);
                //cout<<"rehan"<<" "<<xx<<"\n";
            }
           

        }
        cout<<xx<<"\n";
    }
  return 0;
 }