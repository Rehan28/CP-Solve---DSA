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
ll mod = 1e9 + 7;
//Muku28
int main()
{
    Muku28();
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int two = 0;
    int one = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==200)
        {
            two++;
        }
        else
        {
            one++;
        }
    }
    //dbg(two);
    //dbg(one);
    if(two==0 or one==0)
    {
        if(n%2==0)
        {
            yes;
        }
        else
        {
            no;
        }
    }
   else
   {
    int x = (one + (two*2));
    if(x%2)
    {
        no;
    }
    else
    {
        yes;
    }
   }
  return 0;
 }