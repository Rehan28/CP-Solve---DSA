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
    int n,m;
    cin>>n>>m;
    string s;
    cin >> s;
    s = '#' + s;
    int pfx[n + 1];
    pfx[0] = 0;
    for (int i = 1; i <= n;i++)
    {
        if(s[i]=='1')
        {
            pfx[i] = pfx[i - 1] + 1;
        }
        else
        {
            pfx[i] = pfx[i - 1];
        }
    }
    vector<int>  preone(n+2);
    vector<int> nextzero(n+2);
    int one = -1;
    for (int i = 1; i <= n;i++)
    {
        preone[i] = one;
        if(s[i]=='1')
        {
            one = i;
        }
     
    }
    int zero = -1;
    for (int i = n; i > 0;i--)
    {
        nextzero[i] = zero;
        if(s[i]=='0')
        {
            zero = i;
        }
     
    }
    set<pair<int, int>> res;
    
    for (int i = 1; i <= m;i++)
    {
        int l, r;
        cin >> l >> r;
        bool f = false;
        int ones = pfx[r] - pfx[l - 1];
        if(ones==0 or ones== (r-l+1))
        {
            f =  true;
        }
        if(pfx[r]-pfx[r-ones]==ones)
        {
            f =  true;
        }
        if(f)
        {
            res.insert({-1, -1});
        }
        else
        {
            int left, right;
            if(nextzero[r]==-1)
            {
                right = n;
            }
            else
            {
                right = nextzero[r] - 1;
            }
            if(preone[l]==-1)
            {
                left = 1;
            }
            else
            {
                left = preone[l] + 1;
            }
            res.insert({left, right});
        }

    
    }
    cout << res.size() << "\n";
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