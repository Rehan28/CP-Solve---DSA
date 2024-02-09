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
bool isPrime(ll x)
{
    ll y = sqrt(x);
    y++;
    if(x==2 or x==3)
    {
        return true;
    }
    for (ll i = 2; i <= y;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
//Muku28
int Rehan()
{
    ll n;
    cin>>n;
    ll x = n + 1;
    ll y = x + n;
    while (28)
    {
       if(isPrime(x) and isPrime(y))
       {
           cout << x * y << "\n";
           return 0;
       }
       else if(isPrime(x)==false)
       {
           x++;
           y++;
       }
       else
       {
           y++;
       }
    }
    
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