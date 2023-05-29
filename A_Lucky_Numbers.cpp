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
        int n,m;
        cin>>n>>m;
        int c = INT_MIN;
        int res1;
        for(int i=n;i<=m;i++)
        {
            int x = i;
            int mn = INT_MAX;
            int mx = INT_MIN;
            while(x>0)
            {
                int y = x%10;
                x = x/10;
                if(y<mn)
                {
                    mn = y;
                }
                if(y>mx)
                {
                    mx = y;
                }
            }
            int res = abs(mx - mn);
            if(res==9)
            {
               res1 = i;
                break;
            }
            if(c<res)
            {
                c = res;
                res1 = i;
            }
        }
        cout<<res1<<"\n";
        //cout<<c<<"\n";
        
    }
  return 0;
 }