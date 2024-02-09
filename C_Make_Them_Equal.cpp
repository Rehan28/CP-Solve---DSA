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
    char c;
    cin >> c;
    string s;
    cin >> s;
    int x = -1;
    for (int i = n - 1; i > -1;i--)
    {
        if(s[i]!=c)
        {
            x = i;
            break;
        }
    }
    if(x==-1)
    {
        cout << 0 << "\n";
        nl;
    }
    else
    {
        x = 0;
        //int xx = n / 2;
        for(int i=(n/2);i<n;i++)
        {
            if(s[i]==c)
            {
                x = i;
                break;
            }
        }
        if(x==0)
        {
            cout << 2 << "\n";
            cout << n << " " << n - 1 << "\n";
        }
        else
        {
            cout<<1<<"\n";
            cout << x+1 << "\n";
        }
    }
}
//--------------28--------------//
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        Rehan();
    }
  return 0;
 }