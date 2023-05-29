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
   // setIO("gymnastics");
   // Muku28();
   int n,m;
   cin>>n>>m;
   int a[n][m];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        int x;
        cin>>x;
        a[i][x-1] = j;
    }
   }
   int res = 0;
   for(int i=0;i<m;i++)
   {
    for(int j=i+1;j<m;j++)
    {
        int c = 0;
        int c1 = 0;
        for(int k=0;k<n;k++)
        {
            //dbg(a[k][i]);
           
            if(a[k][i]<a[k][j])
            {
                c1++;
            }
            else
            {
                c++;
            }
           
        }
        
        if(c==0 or c1==0)
        {
            res++;
        }
    }
   }
   cout<<res<<"\n";
   
  return 0;
 }