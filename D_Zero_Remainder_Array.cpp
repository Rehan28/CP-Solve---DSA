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
int Rehan()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    cin(a,n);
    sort(a, a + n);
    ll b[n];
    a[0] = k - (a[0] % k);
    if(a[0]%k==0)
    {
        a[0] = 0;
    }
    b[0] = a[0];
    map<ll, ll> mp;
    mp[a[0]] = a[0];
    for (int i = 1; i < n;i++)
    {
        a[i] = k - (a[i] % k);
        if(a[i]%k==0)
        {
            a[i] = 0;
        }
        //
        if(mp[a[i]]!=0 and a[i]!=0)
        {
            b[i] = (mp[a[i]] + k);
            mp[a[i]] = b[i];
        }
        else
        {
            b[i] = a[i];
            mp[a[i]] = a[i];
        }
    }
    sort(b, b + n);
    ll x = 0;
    ll ans = 0;
    for (int i = 0; i < n;i++)
    {
        //cout << b[i] <<  " ";
        if(b[i]!=0)
        {
            if(x==b[i])
            {
                x++;
                ans++;
            }
            else if(x<b[i])
            {
                ans += (b[i] - x);
                x = b[i];
                i--;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }