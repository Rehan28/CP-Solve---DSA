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
       string s,s1;
       int n,m;
       cin>>s>>n;
       cin>>s1>>m;
       int x1 = s.size();
       int x2 = s1.size();
       int x11 = stoi(s);
       int x22 = stoi(s1);
       x1 = x1+n;
        x2 += m;
       if(x11>x22)
       {
        
        if(x2>x1)
        {
            cout<<'<'<<"\n";
        }
        else
        {
            cout<<'>'<<"\n";
        }
       }
       else if(x11<x22)
       {
        if(x2<x1)
        {
            cout<<'>'<<"\n";
        }
        else
        {
            cout<<'<'<<"\n";
        }
       }
       else
       {
        if(n>m)
        {
            cout<<'>'<<"\n";
        }
        else if(m>n)
        {
            cout<<'<'<<"\n";
        }
        else{
            cout<<'='<<"\n";
        }
       }
    }
  return 0;
 }