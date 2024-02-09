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
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum = 0;
    bool f = false;
    if(b%a==0 and b>=a and c%a==0 and c>=a)
    {
        if(b/a!=0)
        {
            sum += (b / a) - 1;
        }
        if(c/a!=0)
        {
            sum += (c / a);
            sum--;
        }
        if(sum<=3)
        {
            f = true;
        }
    }
    if(a%b==0 and a>=b and c%b==0 and c>=b)
    {
        sum = 0;
        if(a/b!=0)
        {
            sum += (a / b) - 1;
        }
        if(c/b!=0)
        {
            sum += (c / b);
            sum--;
        }
        if(sum<=3)
        {
            f = true;
        }
    }
    if(a%c==0 and a>=c and b%c==0 and b>=c)
    {
        sum = 0;
        if(b/c!=0)
        {
            sum += (b / c) - 1;
        }
        if(a/c!=0)
        {
            sum += (a / c);
            sum--;
        }
        if(sum<=3)
        {
            f = true;
        }
    }
    if(f)
    {
        yes;
    }
    else
    {
         no;
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