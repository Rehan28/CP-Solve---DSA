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
    ll n;
    cin>>n;
    vector<ll> fibo;
    fibo.push_back(0);    
    fibo.push_back(1); 
    int x = 2;
    if(n==0)
    {
       cout<<0<<" "<<0<<" "<<0<<"\n";
        return 0;
    }
    if(n==1)
    {
        cout<<0<<" "<<0<<" "<<1<<"\n";
        return 0;
    }
    if(n==2)
    {
        cout<<0<<" "<<1<<" "<<1<<"\n";
        return 0;
    }
    while(1)
    {
        ll y = fibo[x-1] + fibo[x-2];
        if(y==n)
        {
            break;
        }
        fibo.push_back(y);
        x++;
    }
    cout<<fibo[x-4]<<" "<<fibo[x-3]<<" "<<fibo[x-1]<<"\n";
  return 0;
 }