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
        cin>>s;
        int pfx[n];
        int pfx1[n];
        set<char> ch;
        set<char> ch1;
        for(int i=0;i<n;i++)
        {
            ch.insert(s[i]);
            pfx[i] = ch.size();
        }
        for(int i=n-1;i>-1;i--)
        {
            ch1.insert(s[i]);
            pfx1[i] = ch1.size();
        }
        int sum = INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            int x = pfx[i] + pfx1[i+1];
            sum = max(sum,x);
            //cout<<i<<" "<<sum<<"\n";
        }
        cout<<sum<<"\n";
    }
  return 0;
 }