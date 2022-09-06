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
#define cin(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
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
        int n,q;
        cin>>n>>q;
        n++;
        int a[n];
        int b[n];
       rep(i,1,n)
       {
        cin>>a[i];
        b[i] = a[i];
       }

       sort(b+1,b+n);

        while(q--)
        {
            int sum = 0;
            int x,y;
            cin>>x>>y;
           int r = x-2;
            if(x>1)
            {
                y = y-r;
            }

            //dbg(a[x]);
            //dbg(b[n-1]);
            if(b[n-1]==a[x])
            {
                sum = y;
            }
            else
            {
                sum = 0;
            }
            printi(sum);

        }
    }
  return 0;
 }
