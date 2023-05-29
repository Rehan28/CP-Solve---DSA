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
        int n;
        cin>>n;
        int res = INT_MAX;
        vector<int> b;
        vector<int> c;
        int it = 0;
        for (int i = 0; i < n;i++)
        {
            int a;
            string s;
            cin >> a >> s;
            if(s=="11")
            {
                res = min(res, a);
                it++;
            }
            else if(s=="01")
            {
                b.push_back(a);
            }
            else if(s=="10")
            {
                c.push_back(a);
            }
        }
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
       if((b.size()>0 and c.size()>0))
       {
         if(it==0)
         {
                res = b[0]+c[0];
         }
         else
         {
                res = min( b[0]+c[0], res);
         }
          cout << res << "\n";
       }
       else if(it>0)
       {
            cout << res << "\n";
       }
       else
       {
            printi(-1);
       }
    }
  return 0;
 }