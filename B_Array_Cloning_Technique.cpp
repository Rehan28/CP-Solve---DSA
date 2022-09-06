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
        ll a[n+1];
        cin(a,n);
        sort(a,a+n);
        a[n] = a[0];
        int g = 0;
        int x = 0;
        rep(i,0,n)
        {
            g++;
            if(a[i]!=a[i+1])
            {
                if(x<g)
                {
                   x = g; 
                }
                
                g = 0;
            }
        }
        //dbg(x); 
        int y = n-x;
        int sum = 0;
        if(x==0)
        {
            printi(0);
        }
       
        else
        {
           
            while(1)
            {
               sum = sum + x + 1;
               y = y - x;
               x = x+x;
               if(y<0)
               {
                sum = sum + y;
                y = 0;
               }
               if(y==0)
               {
                break;
               }
            }
            printi(sum);
        }

    }
  return 0;
 }