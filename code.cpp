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
    ll n,p,q;
    cin>>n>>p>>q;
    ll sum[n];
    sum[0] = p;
    for(ll i=1;i<n;i++)
    {
        sum[i] = sum[i-1]+p;
    }
    ll pfx[n];
    pfx[0] = p;
     for(ll i=1;i<n;i++)
    {
       pfx[i] = pfx[i-1] + sum[i]; 
    }
    for(ll i=0;i<q;i++)
    { 
        ll a;
        cin>>a;
        ll last = -1;
        ll total = 0;
        for(ll i=0;i<n;i++)
        {
            if(pfx[i]>=a)
            {
                last = i+1;
                total = pfx[i];
                break;
            }
        }
        ll last1 = p;
        while(1)
        {
            if(total==a)
            {
                break;
            }
            last1--;
            total -= last;
            if(total<a)
            {
                last1++;
                total += last; 
               break;
            } 
           
        }
        if(last==-1)
        {
            cout<<last<<"\n";

        }
        else
        {
        ll xx = total - a;
        
        cout<<1<<" "<<last;
        nl;
        //cout<<xx<<"\n";
        for(ll i=1;i<=last;i++)
        {
            if(i==xx)
            {
                cout<<p-1<<" ";
            }
            else if(i==last)
            {
                cout<<last1<<" ";
            }
            else
            {
                cout<<p<<" ";
            }
        }
        nl;
        }
        

    }
  return 0;
 }