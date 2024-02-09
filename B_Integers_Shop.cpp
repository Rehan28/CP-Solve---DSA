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
    int n;
    cin>>n;
    int mn = INT_MAX;
    int mx = INT_MIN;
    int mnv = INT_MAX;
    int mxv = INT_MAX;
    int Totalres = INT_MAX;
    int have = 0;
    int mnt = INT_MAX;
    int mxt = INT_MIN;
    for (int i = 0; i < n;i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int res = 0;
        int x = 0;
        if(a<mn)
        {
            mn = a;
            mnv = c;
            x++;
        }
        else if(a==mn)
        {
            mnv = min(mnv,c);
             x++;
        }
        if(b>mx)
        {
            mx = b;
            mxv = c;
            x++;
        }
        else if(b==mx)
        {
            mxv = min(mxv,c);
            x++;
        }
        res = mnv + mxv;
        if(x==2)
        {
            res = res / 2;
        }
        if(mnt>mn and mxt<mx)
        {
            mnt = mn;
            mxt = mx;
            Totalres = c;
            res = Totalres;
        }
        else if(mnt==mn and mxt==mx)
        {
            Totalres = min(Totalres, c);
            res = min(Totalres,res);
        }
        cout << res << "\n";
    }
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