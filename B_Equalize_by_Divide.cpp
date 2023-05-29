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
        ll a[n];
        cin(a,n);
        bool f = true;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                f = false;
                break;
            }
        }
        if(f)
        {
            int j = 0;
            //vector<pair<int,int>> p;
            cout<<(n*(n-1)<<"\n";
            for(int i=0;i<n-1;i++)
            {
               for(int j=i+1;j<n;i++)
               {
                 cout<
               }
            }
            
          
        }   
        else
        {
            printi(-1);
        }     
    }
  return 0;
 }