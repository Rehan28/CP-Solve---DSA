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
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    ll pfx[n];
    ll pfx1[n];
    ll j = n - 1;
    pfx[0] = a[0];
    pfx1[n-1] = a[n-1];
    for (int i = 1; i < n;i++)
    {
        j--;
        pfx[i] = (pfx[i - 1] ^ a[i]);
        pfx1[j] = (pfx1[j + 1] ^ a[j]);
        //cout << pfx[i] << " " << pfx1[j] << " \n";
    }
    for (int i = 1; i < n;i++)
    {
        if(pfx[i-1]==pfx1[i])
        {
            yes;
            return 0;
        }
    }
    for (int i = 1; i < n;i++)
    {
        ll xx = 0;
        for (int j = i; j < n - 1;j++)
        {
            xx ^= a[j];
            if(pfx[i-1]==xx and xx==pfx1[j+1])
            {
                yes;
                return 0;
            }
        }

    }
    
    no;
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