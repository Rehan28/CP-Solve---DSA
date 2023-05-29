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
int lcm(int a,int b)
{
  return (a*b)/__gcd(a,b);
}
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        cin(a,n);
        //int c[n+2] = {1};
        vector<int> v;
        v.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
          v.push_back(lcm(a[i],a[i-1]));
        }
        
        bool b = true;
        for(int i=0;i<n-1;i++)
        {
          
          
          if(__gcd(v[i],v[i+1])!=a[i])
          {
            b = false;
          }
        }
        if(b)
        {
            prints("YES");
        }else
        {
            prints("NO");
        }
    }
  return 0;
 }