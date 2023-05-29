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
  int t;
  cin>>t;
  int ii = 1;
  while(ii<=t)
  {
    long long int  n,k;
    cin>>n>>k;
    long long int sum = 0;
    long long int a[n];
    cin(a,n);
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    long long int extra = a[0];
    ll ex =0;
    ll ex1 = 0;
    for(int i=0;i<n-1;i++)
    {
      ex += a[i];
      ex1 += a[i+1];
      if(ex<ex1)
      {
        extra += (ex1-ex);
        ex = 0;
        ex1 =  0;
      }
    }
    extra = (extra * (k-1));
    cout<<"Case "<<ii<<": "<<(sum+extra)<<"\n";
   ii++;

  }
  return 0;
 }

