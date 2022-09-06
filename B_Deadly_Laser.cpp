#include<bits/stdc++.h>
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
//muku28
int main()
{
    muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,m,s1,s2,d;
        cin>>n>>m>>s1>>s2>>d;
        int x = (n+m-2);
        
        if(((n-s1)>d and (s2-1)>d) || ((s1-1)>d and (m-s2)>d)) 
        {
            printi(x);
        }
        else
        {
            printi(-1);
        }
    }
  return 0;
 }