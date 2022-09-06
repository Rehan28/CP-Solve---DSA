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
     int n,p;
     cin>>n>>p;
     int a[n];
     cin(a,n);
     sort(a,a+n);
     ll pfx[n];
     pfx[0] = a[0];
     for(int i=1;i<n;i++)
     {
        pfx[i] = pfx[i-1] + a[i];
     }
     //printl(pfx[n-3-1]);
     while(p--)
     {
        int x,y;
        cin>>x>>y;
        int b = n-x-1;
        if(x==1)
        {
          printi(a[n-1]);
        }
        else if (x==n)
        {
             printl(pfx[y-1]);
        }
        else
        {
            printl((pfx[b+y]-pfx[b]));
        }
        //printl(sum);

     }
  return 0;
 }