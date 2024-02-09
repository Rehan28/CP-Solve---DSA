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
       string s;
       cin>>s;
       int even = 0;
       int odd = 0;
       int re = 5;
       int re1 = 5;
       int res = 10;
      
           for (int i = 0; i < 10; i++)
           {
               if (i % 2)
               {
                   if (s[i] == '1')
                   {
                       odd++;
                   }
                   else if (s[i] == '?')
                   {
                       odd++;
                   }
                   re--;
               }
               else
               {
                   if (s[i] == '1')
                   {
                       even++;
                   }
                   re1--;
               }
               // dbg(re);
               if (even > (re + odd) or odd > (re1 + even))
               {
                   res = i + 1;
                   break;
               }
           }
           even = 0;
           odd = 0;
           re = 5;
           re1 = 5;
           int res1 = 10;
           for (int i = 0; i < 10; i++)
           {
               if (i % 2)
               {
                   if (s[i] == '1')
                   {
                       odd++;
                   }
                   re--;
               }
               else
               {
                   if (s[i] == '1' or s[i]=='?')
                   {
                       even++;
                   }
                   re1--;
               }
               // dbg(re);
               if (even > (re + odd) or odd > (re1 + even))
               {
                   res1 = i + 1;
                   break;
               }
           }
           res = min(res, res1);
           cout << res << "\n";
    }
    
  return 0;
 }