#include<bits/stdc++.h>
//muku28
using namespace std;using LL = long long;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define nl cout<<"\n";
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define all(v) v.begin(),v.end()
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
        bool c = 1;
        bool f = 0;
        ll sum = 0;
        rep(i,0,n-1)
        {
            if(a[i]>0 && c)
            {
                c=0;
                f=1;
            }
            if(f)
            {
                sum = sum + a[i];
                if(a[i] == 0)
                {
                    sum++;
                }
            }
        }
        printl(sum);
    }
  return 0;
 }