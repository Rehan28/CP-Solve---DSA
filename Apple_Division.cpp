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
ll a[2000]; ll n;
ll ans(int i,ll sum1,ll sum2)
{
    if(i==n)
    {
        return abs(sum1-sum2);
    }
    else
    {
        return min(ans(i+1,sum1+a[i],sum2),ans(i+1,sum1,sum2+a[i]));
    }
}
//Muku28
int main()
{
    Muku28();
    
       
        cin>>n;
        cin(a,n);
        cout<<ans(0,0,0)<<"\n";
    
  return 0;
 }