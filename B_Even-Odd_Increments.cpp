#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(v) v.begin(),v.end()
#define nl cout<<"\n";
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll even = 0;
        ll odd = 0;
        ll e = 0;
        ll o = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even += a[i];
                e++;
            }
            else
            {
                odd +=a[i];
                o++;
            }
        }
        ll sum = odd + even;
        bool ee = true;
        bool oo = false;
        for(int i=0;i<k;i++)
        {
            ll x = 0,y=0;
            int k,q;
            cin>>k>>q;
            if(k==0)
            {
                x = e*q;
                if(q%2!=0)
                {
                    o += e;
                    e -=e;
                }
                
            }
            else
            {
                y = o*q;
                if(q%2!=0)
                {
                    e += o;
                    o -= o;
                }
            }
            sum +=  x + y;
            cout<<sum<<"\n";
        }
        
    }
  return 0;
 }