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
     int t;
    cin>>t;
   while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        cin(a,n);
          ll res = a[0];
            
            for(ll j=0;j<n;j++)
            {
                res = __gcd(a[j],res);
            }
            if(res == 1)
            {
                cout<<0<<"\n";
                continue;
            }
        for(ll i=n-1;i>-1;i--)
        {  
            res = a[0];
            ll sum = 0;
            ll gc = __gcd(a[i],(i+1));
            for(ll j=0;j<n;j++)
            {
                if(i==j)
                {
                    res = __gcd(gc,res);
                    continue;
                }
                res = __gcd(a[j],res);
            }
            //cout<<res<<"\n";
            if(res==1)
            {
                
                cout<<n - (i+1) + 1<<"\n";
                //break;
            }
        }
        
    }
  return 0;
 }