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
#define cin(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
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
        ll n;
        cin>>n;
        ll a[n+1];
        cin(a,n);
        ll c = 0;
       vector<ll> b;
        for(int i=1;i<=n;i++)
        {
            b.push_back(a[i] - i) ;
        }
      
        sort(b.begin(),b.end());
        ll sum = 0;
       /* for(int i=0;i<n;i++)
        {
            printi(b[i]);
        }*/
       b.push_back(-1);
        for(int i=0;i<n;i++)
        {
            c++;  //dbg(c);
            if(b[i]!=b[i+1] || c==n)
            {
                c--;
                ll result = 0;
                while(c!=0)
                {
                 result+=c;
                 c--;
               }
               c=0;
               sum +=result;
            }
        }
       cout<<sum<<"\n";
    }
  return 0;
 }