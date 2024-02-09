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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    map<int, int> first;
    int posf[n] = {0};
    for (int i = 0; i < n;i++)
    {
        if(first[a[i]]==0)
        {
            first[a[i]] = 1;
            posf[i] = 1;
        }
    }
    map<int, int> last;
    int posl[n] = {0};
    for (int i = n - 1; i > -1; i--)
    {
        if(last[a[i]]==0)
        {
            last[a[i]] = 1;
            posl[i] = 1;
        }
    }
    int pfx[n];
    pfx[n - 1] = posl[n - 1];
    for (int i = n - 2; i > -1;i--)
    {
        pfx[i] = pfx[i + 1] + posl[i];
    }
    ll ans = 0;
    for (int i = 0; i < n;i++)
    {
        if(posf[i]==1)
        {
            ans += (pfx[i]);
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