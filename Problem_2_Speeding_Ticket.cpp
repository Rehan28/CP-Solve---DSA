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
    //setIO("speeding");
   // Muku28();
   int n,m;
   cin>>n>>m;
   int a[n],b[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i]>>b[i];
    if(i!=0)
    {
        a[i] += a[i-1];
    }
   }
   int x[m],y[m];
   for(int i=0;i<n;i++)
   {
    cin>>x[i]>>y[i];
    if(i!=0)
    {
        x[i] += x[i-1];
    }
   }
   int pos = 0;
   int speed = 0;
   for(int i=0;i<m;i++)
   { 
    int tep;
     if(x[i]>a[pos])
     {
        pos++;
        tep = max(0,(b[pos] - y[i]));
     }
     else if(x[i] == a[pos])
     {
        tep = max(0,(b[pos] - y[i]));
        pos++;
     }
     else
     {
        tep = max(0,(b[pos] - y[i]));
     }
     if(speed<tep)
     {
        speed = tep;
     }
     
   }
   cout<<speed<<"\n";

  return 0;
 }