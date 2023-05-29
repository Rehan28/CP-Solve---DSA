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
       ll n;
       cin>>n;
       if(n%2==0)
       {
        printi(-1);
       }
       else
       {
        vector<ll> v;
        int c = 0;
        while(n!=1)
        {
            c++;
            if((n/2)%2)
            {
                v.push_back(2);
                n = n/2;
            }
            else
            {
                v.push_back(1);
                 n = (n/2) + 1;
            }
        }
        cout<<c<<"\n";
        for(int i=v.size()-1;i>-1;i--)
        {
            cout<<v[i]<<" ";
        }
        nl;
       }
        
    }
  return 0;
 }