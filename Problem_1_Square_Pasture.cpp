#include<bits/stdc++.h>
/* 
ID: your id 
LANG: C++17
PROB: Problem 1. Square Pasture
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
    setIO("square");
   // muku28();
   int a,b,x,y;
   cin>>a>>b>>x>>y;
   int a1,b1,x1,y1;
   cin>>a1>>b1>>x1>>y1;
   int height = (max(max(b,b1),max(y,y1))-min(min(b,b1),min(x,x1)));
   int weight = (max(max(x,x1),max(a,a1))-min(min(x,x1),min(a,a1)));
   int sum = max(height,weight);
   printi((sum*sum));
   
  return 0;
 }