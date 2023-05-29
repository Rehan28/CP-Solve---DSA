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
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int x,y,z,a;
        cin>>x>>y>>z>>a;
        int f = 0;
        if(x<y)
        {
            f++;
        }
        if(y<a)
        {
            f++;
        }
        if(z<a)
        {
            f++;
        }
        if(x<z)
        {
            f++;
        }
        if(f==4 or f == 0)
        {
            yes;
        }
        else
        {
            if(x<y and y>a and z<a and z<x)
            {
                yes;
            }
            else if(x>y and y<a and z>a and z>x)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
  return 0;
 }