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
        int n;
        cin>>n;
        ll a[n];
        cin(a,n);
        int c = 0;
        if(n==1)
        {
            printi(0);
        }
        else
        {
            for(int i=n-1;i>0;i--)
            {
            if(a[i]<=a[i-1] && a[i-1]!=0)
             {
                a[i-1] = a[i-1]/2;
                c++;
                i++;
             }
            }
        bool b = 1;
        rep(i,0,n-1)
        {
            if(a[i]>=a[i+1])
            {
                b = 0;
                break;
            }
        }
        if(b)
        {
            printi(c);
        }
        else
        {
            printi(-1);
        }
    
        }
        
    }
  return 0;
 }