#include<bits/stdc++.h>
/* 
ID: your id 
LANG: C++17
PROB: Problem 1. Fence Painting
*/
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
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

//Muku28
int main()
{
   // setIO("div7");
   Muku28();
   int n;
   cin>>n;
   int a[n];
   cin(a,n);
   int pfx[n];
   pfx[0] = a[0];
   for(int i=1;i<n;i++)
   {
    pfx[i] = pfx[i-1] + a[i];
   }
   int res = INT_MIN;
   for(int i=0;i<n;i++)
   {
    for(int j=i;j<n;j++)
    {
        int x;
        if(i==0)
        {
            if(pfx[j]%7==0)
            {
                x = j+1;
                res = max(res,x);
            }
        }
        else
        {
            if((pfx[j]-pfx[i-1])%7==0)
            {
                x = (j-(i-1));
                res = max(res,x);
            }
        }
        //cout<<res<<"\n";
        
    }
   }
   cout<<res<<"\n";
  return 0;
 }