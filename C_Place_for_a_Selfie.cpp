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
        int n,m;
        cin>>n>>m;
        int k[n];
        cin(k,n);
        int a[m];
        int b[m];
        int c[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
        
        for(int i=0;i<m;i++)
        {
            
            bool f = false;
            int res;
            for(int j=0;j<n;j++)
            {
                b[i] = b[i] - k[j];
                int imag = (b[i]*b[i])-(4*a[i]*c[i]);
                
                if(imag<0)
                {
               
                    res = k[j];
                    f = true;
                    break;
                
                }   
            }
            if(f)
            {
                yes;
                cout<<res<<"\n";
            }
            else
            {
                no;
            }
        }

        nl;
        
    }
  return 0;
 }