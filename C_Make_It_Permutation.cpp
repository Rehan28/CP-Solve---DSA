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
        ll n,m,d;
        cin>>n>>m>>d;
        ll a[n];
        cin(a,n);
        ll sum = 0;
        sort(a,a+n);
        ll c = 0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
        }
        ll xx = 0;
        ll c1 = 0;
        for(int i=0;i<n;i++)
        {
           if(a[i]>xx)
            {
                c1 += (a[i]-(xx)) - 1;
            } 
            //dbg(c1);
            xx = a[i];
        }
        if(c1>=c)
        {
            c = 0;
        }
        sum = (c*m)+(c1*d);
        //cout<<sum<<"\n";
        ll y = 0;
        c = 1;
        c1 = 0;
        ll x = 0;
        for(int i=0;i<n;i++)
        {
            if(y==0 and c!=a[i])
            {
                y = (a[i]-y) -1;
                c++;
                i--;
                continue;
            }
            else if(y==0)
            {
                y = -1;
            }
            if(c==a[i])
            {
                c1++;
            }
            else if(a[i]==c-1)
            {
                x++;
            }
            else
            {
                break;
            }
            
            c++;
        }
        //cout<<x<<"\n";
        if(y==-1)
         {
            y = 0;
         }
         c1 -= y;
         x = min((x*d),(x*m));
         
        ll sum1 = (x*m) + ((n-(c1+x))*m) + (y*d) - (y*m);
        
        cout<<min(sum,sum1)<<"\n";
        cout<<sum1<<"\n";
        cout<<sum<<"\n";

        
    }
  return 0;
 }