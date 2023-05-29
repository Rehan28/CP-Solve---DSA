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
       ll n,x,y,x1,y1;
       cin>>n>>x>>y>>x1>>y1;
       ll blt = n/2;
       ll one;
       ll two;
       if(x<=blt)
       {
        if(y<=blt)
        {
        
           one = min(x,y);
        }
        else
        {
            y = n-y;
            y++;
            one = min(x,y);
        }
       }
       else
       {
        x = n-x;
        x++;
        if(y<=blt)
        {
            one = min(x,y);
        }
        else
        {
            y = n-y;
            y++;
            one = min(x,y);
        }
       }
////hdsfjkhdjfhjdhfjkfjh
       if(x1<=blt)
       {
        if(y1<=blt)
        {
           two = min(x1,y1);
        }
        else
        {
            y1 = n-y1;
            y1++;
           two = min(x1,y1);
        }
       }
       else
       {
        x1= n-x1;
        x1++;
        if(y1<=blt)
        {
            two = min(x1,y1);
        }
        else
        {
            y1 = n-y1;
            y1++;
            two = min(x1,y1);
        }
       }
       //cout<<one<<"\n";
       //cout<<two<<"\n";
       cout<<abs(one - two)<<"\n";
    }
  return 0;
 }