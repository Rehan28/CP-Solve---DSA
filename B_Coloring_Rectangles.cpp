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
        if(n==1 and m==1)
        {
            printi(0);
        }
        else
        {
            if((n%3!=0 and m>1))
            {

                int x = ((n/3)*m);
                int y = n%3;
                int yy = m%3;
                if(yy==0)
                {
                    x += y*(m/3);
                }
                else if(y==2 and yy==2)
                {
                     x += (y*(m/3)) + 2;
                }
                else
                {
                   x += (y*(m/3)) + 1;
                }
                
                printi(x);
            }
            else if(n%3!=0)
            {
                int x = ((n/3)*m)+1;
                printi(x);
            }
            else
            {
                printi((n/3)*m);
            }
        }
        
    }
  return 0;
 }