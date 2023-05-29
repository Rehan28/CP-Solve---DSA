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
  
        ll n,k,m;
        cin>>n>>k>>m;
        ll a[n];
        cin(a,n);
        sort(a, a + n);
        int c = 1;
        int sm = 0;
        vector<ll> v;
        for (int i = 0; i < n-1;i++)
        {
            ll dif = (a[i + 1] - a[i]);
            ll x = dif / m;
            if(dif%m==0)
            {
                x--;
            }
            if(dif>m)
            {
                v.push_back(x);
            }
        
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size();i++)
        {
            //cout << v[i] << "\n";
            if(v[i]<=k)
            {
                k -= v[i];
              
            }
            else
            {  c++;
               // break;
            }
        }

        cout << c << "\n";

        return 0;
 }