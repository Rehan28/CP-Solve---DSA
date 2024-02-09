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
map<ll,ll> v;
ll mx = 1e5 + 1;
ll mm = 1e3;
ll pre()
{
    for (ll i = 2; i < mm; i++)
    {
        ll sum = i;
        ll last = i;
        ll j = last*i;
        //cout << i << " -- rehan\n";
        sum += j;
        while ((sum + j)<mx)
        {
            last = j;
            j = last * i;
            v[sum] = 1;
            sum += j;
            if(sum>mx)
            {
                break;
            }
            //cout << sum << "\n";
        }

    }
}
void Rehan()
{
    ll n;
    cin >> n;
    n--;
    if(v[n]==1)
    {
        yes;
    }
    else
    {
        no;
    }
}
//--------------28--------------//
int main()
{
    Muku28();
    pre();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }
