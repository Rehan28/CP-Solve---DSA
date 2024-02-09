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
void Rehan()
{
    ll n;
    cin>>n;
    n += 2;
    ll a[n];
    cin(a,n);
    ll sum = 0;
    map<ll, ll> mp  ;
    for (ll i = 0; i < n;i++)
    {
        sum += a[i];
        mp[a[i]] = i+1;
    }
    ll ans = -1;
    ll ans1 = -1;
    for (ll i = 0; i < n;i++)
    {
        ll x = sum - a[i];
        //cout << x << "\n";
        if(x%2==0 or x==1)
        {
            x = x / 2;
            if(x==0)
            {
                x = 1;
            }
            if(mp[x]>0 and mp[x]-1!=i)
            {
                ans = i;
                for (ll j = 0; j < n;j++)
                {
                    if(mp[x]-1==j)
                    {
                        ans1 = j;
                        break;
                    }
                }
                break;
            }
        }
    }
    if(ans==-1)
    {
        printi(-1);
    }
    else
    {
    for (ll i = 0; i < n;i++)
    {
        if(i!=ans and i!=ans1)
        {
            cout << a[i] << " ";
        }
    }
    nl; 
    }
   
}
//--------------28--------------//
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        Rehan();
    }
  return 0;
 }