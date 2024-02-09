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
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    int b[n];
    cin(b, n);
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++)
    {
        vp.push_back(make_pair(b[i], a[i]));
    }
    sort(vp.begin(), vp.end());
    int ans = k;
    int x = k;
    for (int i = 0; i < n;i++)
    {
        x = vp[i].first;
        if(vp[i].first<=k)
        {
            int y = (n - vp[i].second);
            int xx = n-1;
            n -= vp[i].second;
            if(y-i>2)
            {
                n++;
                ans += (x * vp[i].second);
            }
            else if(y-i==2)
            {
                ans += (x * vp[i].second);
            }
            else
            {
                ans += (x * (xx-i));
            }
        }
        else
        {
            ans += k;
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