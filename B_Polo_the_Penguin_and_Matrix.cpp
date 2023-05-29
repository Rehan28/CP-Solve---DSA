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
   
        int n,m,d;
        cin>>n>>m>>d;
        n = n*m;
        int a[n];
        cin(a,n);
        int b[n] = {0};
        int res = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                bool f = true;
                int y = 0;
                for(int j=0;j<n;j++)
                {
                    int x = abs(a[i]-a[j]);
                    y += (x/d);
                    if(x%d)
                    {
                        f = false;
                        b[i] = 1;
                        b[j] = 1;
                        break;
                    }
                }
                if(f)
                {
                    res = min(res,y);
                }
            }
        }
        if(res==INT_MAX)
        {
            printi(-1);
        }
        else
        {
            cout<<res<<"\n";
        }

        
    
  return 0;
 }