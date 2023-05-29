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
ll mod = 10e9 + 7;
//Muku28
int main()
{
    Muku28();
   
        int n;
        cin>>n;
        int a[n];
        cin(a,n);
        int c,c1;
        int res = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
           if(abs(a[i]-a[i+1])<res)
           {
            res = abs(a[i]-a[i+1]);
            c = i+1;
            c1 = i+2;
           }
        }
        if(abs(a[0]-a[n-1])<res)
           {
            res = abs(a[0]-a[n-1]);
            c = 1;
            c1 = n;
           }
        cout<<c<<" "<<c1<<"\n";
    
  return 0;
 }