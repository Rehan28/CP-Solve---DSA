#include<bits/stdc++.h>
/* 
ID: your id 
LANG: C++17
PROB: Problem 1. Fence Painting
*/
//muku28
using namespace std;typedef long long ll;
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
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

//muku28

int main()
{
   setIO("billboard");
   // muku28();
   int a[3],b[3],x[3],y[3];
   int a1[3];
   for(int i=0;i<3;i++)
   {
    cin>>a[i]>>b[i]>>x[i]>>y[i];
    a1[i] = (x[i]-a[i])*(y[i]-b[i]); 
    //dbg(a1[i]);
   }
   int interA = max(0,((min(x[0],x[2])- max(a[0],a[2])))) * max(0,(min(y[2],y[0])-max(b[0],b[2])));//x and y
    a1[0] = a1[0] - interA;
    //dbg(a1[0]);
   int interB =  max((min(y[1],y[2])-max(b[1],b[2])),0) *  max(0,(min(x[1],x[2])-max(a[1],a[2]))); // y and x;
   a1[1] = a1[1] - interB;
   //dbg(a1[1]);
   printi((a1[0]+a1[1]));
   return 0;
 }