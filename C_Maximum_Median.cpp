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
ll n,k;
ll a[1000000];
ll istrue(ll val)
{
    ll sum = 0;
    for (ll i = n/2; i < n;i++)
    {
        if(val>a[i])
        {
            sum += val - a[i];
        }
    }
    return sum;
}
//Muku28
int Rehan()
{
   
    cin>>n>>k;
    cin(a,n);
    sort(a, a + n);
    ll l = a[n / 2];
    ll h = 1e12;
    ll mid;
    while (l<h)
    {
        mid = l+(h-l+1)/2;
        if(istrue(mid)<=k)
        {
            l = mid;
        }
        else
        {
            h = mid-1;
        }
    }
    
 
    cout << l << "\n";

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