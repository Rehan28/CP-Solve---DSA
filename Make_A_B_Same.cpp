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
        int n;
        cin>>n;
        int a[n];
        cin(a,n);
        int b[n];
        cin(b,n);
        bool f = true;
        int st = -1;
        int end = -1;
        int c = 0;
        int bb = 0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==1)
           {
            c++;
           }
           if(b[i]==1){
            bb++;
           }
            if(b[i]==0 and a[i]==1)
            {
                f = false; 
                break;
            }
          }
          if(a[0]!=b[0])
          {
            f = false;
          }
          if(a[n-1]!=b[n-1])
          {
            f = false;
          }
          if(c==0 and bb>0)
          {
            f = false;
          }
           if(f)
            {
                yes;
            }
            else
            {
                no;
            }
        
    }
  return 0;
 }