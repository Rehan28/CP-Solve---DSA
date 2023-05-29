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
        string s;
        cin >> s;
        int ali = 0;
        int bob = 0;
        int a = 0;
        int b = 1;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='A')
            {
                if(a==0)
                {
                    ali++;
                    b = 1;
                }
                else
                {
                    a = 0;
                    b = 1;
                }
            }
            else
            {
                if(b==0)
                {
                    bob++;
                    a = 1;
                }
                else
                {
                    b = 0;
                    a = 1;
                }
            }
        }
        cout << ali << " " << bob << "\n";
    }
  return 0;
 }