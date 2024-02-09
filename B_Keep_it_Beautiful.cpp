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
    int a[n];
    cin(a,n);
    int x = a[0];
    int c = n;
    int s[n];
    for (int i = 0; i < n;i++)
    {
        if(a[i]>=x)
        {
            s[i] = 1;
            x = a[i];
        }
        else if(a[i]<=a[0])
        {
            c = i;
            break;
        }
        else
        {
            s[i] = 0;
        }
    }
    int xx = a[c];
    for (int i = c; i < n;i++)
    {
        if(a[i]>=xx and a[i]<=a[0])
        {
            s[i] = 1;
            xx = a[i];
        }
        else
        {
            s[i] = 0;
        }
    }
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
    nl;
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