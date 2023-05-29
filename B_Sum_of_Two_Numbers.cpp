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
        int n;
        cin>>n;
        int x,y;
        if(n%2)
        {
           x = (n/2) + 1;
           y = n/2;
        }
        else
        {
            x = (n/2);
           y = n/2;
        }
        int val1 = 0;
        int val2 = 0;
        int x1 = x;
        int y1 = y;
        dbg(x);
       dbg(y);
        while(1)
        {
            val1 = val1 + (x%10);
            x = x/10;
            if(x==0)
            {
                break;
            }
        }
        while(1)
        {
            val2 = val2 + (y%10);
            y = y/10;
            if(y==0)
            {
                break;
            }
        }
        dbg(val1);
         dbg(val2);
        while(1)
        {
            if((val1==val2) or (abs(val2-val1)<2))
            {
                break;
            }
            x1++;
            y1--;
            val1++;
            val2--;
        }
        cout<<x1<<" "<<y1<<"\n";
    }
  return 0;
 }