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
        ll n;
        cin>>n;
        ll a[n];
        cin(a,n);
        vector<ll> even;
        vector<ll> odd;
        for (int i = 0; i < n;i++)
        {
            if(a[i]%2)
            {
                odd.push_back(a[i]);
            }
            else
            {
                even.push_back(a[i]);
            }
        }
        int x = odd.size();
        if(x==0)
        {
            yes;
        }
        else if(x>0)
        {
            bool f = true;
            sort(odd.begin(), odd.end());
            for (int i = 0; i < even.size();i++)
            {
                if(odd[0]>=even[i])
                {
                    f = false;
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
        }
       
    }
  return 0;
 }