#include<bits/stdc++.h>
//muku28
using namespace std;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
//muku28
int main()
{
    muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n];
        cin(a,n);
        ll sum = 0;
        sort(a,a+n);
        if(n>m)
        {
            prints("NO");
        }
        else
        {
           rep(i,0,n)
        {
            if(i==0)
            {
                sum = sum + 1 + a[i]*2;
            }
            else if( i==(n-1))
            {
                ll x = 0;
                ll y = 0;

                if(a[i]-a[i-1]>0)
                {
                    x = a[i]-a[i-1];
                }
                if(a[i]-a[0]>0)
                {
                    y = a[i] - a[0];
                }
                sum = sum + (1+x+y);
            }
            else
            {
                ll x;
                if((a[i]-a[i-1])<0)
                {
                    x = 0;
                }
                else
                {
                    x = a[i]-a[i-1];
                }
                sum = sum + (a[i]+x+1);
            }
        }
        //printl(sum);
        if(sum>m)
        {
            prints("NO");
        }
        else
        {
            prints("YES");
        }
 
        }
        
    }
  return 0;
 }