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
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        int a[n-1];
        n--;
        cin(a,n);
       vector<int> v;
       v.push_back(a[n-1]);
        for(int i=n-1;i>0;i--)
        {
        
            if(a[i-1]<=a[i])
            {
                v.push_back(a[i-1]);
            }
            else{
                v.push_back(a[i]);
            }
        }
        v.push_back(a[0]);
        for(int i=n;i>-1;i--)
        {
            cout<<v[i]<<" ";
        }
        nl;
    }
  return 0;
 }