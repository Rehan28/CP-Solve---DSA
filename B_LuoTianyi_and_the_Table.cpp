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
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x = n * m;
        int a[x];
        cin(a,x);
        sort(a, a + x);
        int mx = a[x - 1];
        //dbg(a[1]);
        int mn1 = mx - a[0];
        int mn2 = max((mx-a[1]),(a[x-2]-a[0]));
        int mn3 = max(mn1, mn2);
        mn2 = min(mn1, mn2);
        int nn = max(n, m);
        m = min(n, m);
        nn--;
        m--;
        //dbg(mn2 * m);
        cout << (mn3 * nn) + (m * mn2) + ((nn*m) * mn3) << "\n";
    }
  return 0;
 }