#include<bits/stdc++.h>
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
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll n,u,v;
        cin>>n>>u>>v;
        int a[n];
        cin(a,n);
        ll mi = min(u,v);
      
       int c = 1;
       int y = 0;
      
      
        for(int i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])==0)
            {
                c++;
            }
            if(abs(a[i]-a[i+1])==1)
            {
                y++;
            }
        }
        int x = c+y;
        //dbg(x);
        if(x == n )
        {
            if(y==0)
            {
                cout<<(v+mi)<<"\n";
            }
            else
            {
                   cout<<mi<<"\n";
            }
        }
        else 
        {
            printi(0);
        }
    }
  return 0;
 }