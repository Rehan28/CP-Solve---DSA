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
        while(1)
        {
            int x = *max_element(a+l,a+r);
            int y = *min_element(a+l,a+r); 
            //cout<<x<<" "<<y<<"\n";
            if((r-1)==l)
            {
                f = true;
                break;
            }
            if(a[l]!=x and a[l]!=y and a[r-1]!=x and a[r-1]!=y)
            {
                cout<<(l+1)<<" "<<r<<"\n";
                break;
            }
            else
            {
               // dbg(l);
                //dbg(r);
                if(a[l]==x or a[l]==y)
                {
                    l++;
                }
               if(a[r-1]==x or a[r-1]==y)
                {
                    r--;
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