#include<bits/stdc++.h>
/* 
ID: Muku28
LANG: C++17
PROB: Problem 1. Shell Game
*/
//Muku11100
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

//Muku11100
int main()
{
    setIO("shell");
   // Muku28();
   int n;
   int x[4];
   for(int i=0;i<4;i++)
   {
    x[i] = 0;
   }
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int a,b,c;
    cin>>a>>b>>c;
    if(c==a or c==b)
    { x[c]++;
    //dbg(x[c]);
    }
   
   }
  int result = max(x[1],max(x[2],x[3]));
  printi(result);
  return 0;
 }