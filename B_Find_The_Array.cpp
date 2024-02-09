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
    ll a[n];
    cin(a,n);
    ll oddsum = 0;
    ll evensum = 0;
    ll sum = 0;
    for (int i = 0; i < n;i++)
    {
        if(i%2)
        {
            oddsum += (a[i] - 1);
        }
        else
        {
            evensum += (a[i] - 1);
        }
        sum += a[i];
    }
    if((2*oddsum)<=sum)
    {
        for (int i = 0; i < n;i++)
        {
            if(i%2)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << a[i] << " ";
            }
        }
    }
    else
    {
         for (int i = 0; i < n;i++)
        {
            if(i%2)
            {
                cout << a[i] << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
    }
    
    nl;
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