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
        ll n;
        cin>>n;
       
        ll mo = 1000000000+7;
       // n = n%mo; 
       n = n*n;
       ll i=0;
       ll x = 1;
       ll div;
       if(n>mo)
       {
        div = n/mo;
        x = ((div*mo)/2);
        i = mo;
       }
       
        ll sum = 0;
        
        ll j = 0;
        //cout<<n<<"\n";
        for(;;)
        {
            i += x;
            if(i>n)
            {
                break;
            }
            sum = ((sum%mo)+(i%mo))%mo;
            j++;
            if(j==2)
            {
                x++;
                j = 0;
            }
        }
       //cout<<(999589541*mo)/2022<<"\n";
        cout<<((sum%mo)*(2022%mo))%mo<<"\n";
    }
  return 0;
 }