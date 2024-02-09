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
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    cin(a,n);
    sort(a, a + n);
    int pfx[n + 1];
    pfx[0] = a[0];
    for (int i = 1; i < n;i++)
    {
        pfx[i] = pfx[i - 1] + a[i];
    }
   
    int ans = INT_MIN;
    while (x>=0)
    {
        int sum = 0;
        int point = n - x - 1;
        if(point<0)
        {
            ans = max(ans, 0);
            x--;
            continue;
        }
        int start = point - y;
        int psum = 0;
        if(start>=0)
        {
            psum = pfx[start];
        }
        int msum = pfx[point] - psum;
        sum = psum - msum;
        ans = max(ans, sum);
        // cout << x << " " << sum << "\n";
        // cout << point << " " << start << "---\n";
        x--;
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