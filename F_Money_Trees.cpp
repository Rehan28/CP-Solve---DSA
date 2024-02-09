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
    ll b[n];
    cin(b, n);
    ll ans = INT_MIN;
    ll c[n] = {0};
    c[n - 1] = 1;
    for (int i = n - 2; i > -1;i--)
    {
        if(b[i]%b[i+1]==0)
        {
            c[i] = c[i + 1] + 1;
        }
        else
        {
            c[i] = 1;
        }
    }
    for (int i = 0; i < n;i += c[i])
    {
        ll l = i;
        ll r = i;
        ll y = i + c[i];
        ll sum = 0;
        while (r<y)
        {
            sum += a[r];
            if(sum>k)
            {
                ans = max(ans, (r - l));
                //cout << ans << "\n";
                while (sum>k)
                {
                    sum -= a[l];
                    l++;
                }
                
            }
            if(r==y-1)
            {
                ans = max(ans, (r - l)+1);
            }
            r++;
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