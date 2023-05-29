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
        ll n,y;
        cin>>n>>y;
        ll a[7] = {2,3,5,7,11,13,17};
        ll c = 0; 
        int jj = 0;
         for(int j=0;j<7;j++)
            {
                if(n%a[j]==0 and n!=a[j])
                {
                    jj = a[j];
                    n += a[j];
                    c++;
                    break;
                }
            }
             //dbg(c);
        if(jj==0 or jj==3)
        {
            if(jj==0)
            {
               n += n;  
               c++;
            }
               
                //c++;
                for(int j=0;j<7;j++)
                 {
                if(n%a[j]==0)
                {
                    jj = a[j];
                    n += a[j];
                    break;
                }
               }
               c++;
        }
       // dbg(jj);
        c += (y-n)/jj;
        if((y-n)%jj)
        {
            c++;
        }
        cout<<c<<"\n";
        
    }
  return 0;
 }