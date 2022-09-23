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
        ll n;
        cin>>n;
        ll a[n];
        cin(a,n);
        sort(a,a+n);
        ll gap1 = a[1] - a[0];
        ll gap2 = a[2] - a[1];
        ll gap = gap1+gap2;
        for(int i=0;i<n-2;i++)
        {
            gap1 = a[i+1] - a[i];
            gap2 = a[i+2] - a[i+1];
            ll x = gap1 + gap2;
            if(x<gap)
            {
                gap = x;
            }
            
        }
        
        cout<<gap<<"\n";
    }
  return 0;
 }