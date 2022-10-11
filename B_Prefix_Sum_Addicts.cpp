#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
typedef unsigned long long int ull;
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
        ll a[k];
        cin(a,k);

        ll x = n-k+1;

        bool b = true;

        ll fgap = 0;
        if(k>1)
        {
            fgap = a[1] - a[0];
        }
        ll pos = fgap*x;
        if(pos<a[0])
        {  
            b = false;   
        }
        for(int i=2;i<k;i++)
        {
            ll y = a[i] - a[i-1];
            if(fgap>y)
            {
            b = false;
            break;
            }
            fgap = y;
        }
        
        if(b or k==1)
        {
            prints("YES");
        }
        else
        {
            prints("NO");
        }
        
    }
  return 0;
 }