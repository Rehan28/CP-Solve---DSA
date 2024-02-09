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
        int l = 0;
        int r = n;
        bool f = false;
        int x = 1;
        int y = n ; 
        while(1)
        { 
            if(r<=l)
            {
                f = true;
                break;
            }
           
           // cout<<x<<" "<<y<<"\n";
           
            if(a[l]!=x and a[l]!=y and a[r-1]!=x and a[r-1]!=y)
            {
                cout<<(l+1)<<" "<<r<<"\n";
                break;
            }
            else
            {
               // dbg(l);
                //dbg(r);
                if(a[l]==x)
                {
                    l++;
                    x++;
                }
                else if(a[l]==y)
                {
                    l++;
                    y--;
                }
                if(a[r-1]==x)
                {
                    r--;
                    x++;
                }
                else if(a[r-1]==y)
                {
                    r--;
                    y--;
                }
            }
           
        }
        if(f)
        {
            printi(-1);
        }
        
    }
  return 0;
 }