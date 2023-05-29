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
bool isTrue(ll a[],ll n,ll x,ll mid)
{
    ll last = -1;
    for(int i=0;i<n;i++)
    {
        if(a[i]-last>=mid or last==-1)
        {
            last = a[i];
            x--;
        }
        if(x==0)
        {
            break;
        }
    }
    return x==0;
}
int main()
{
    Muku28();
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        cin(a,n);
        ll lo = 0;
        ll hi = 1e10;
        ll mid;
        sort(a,a+n);
        while(hi-lo>1)
        {
            mid = lo + (hi-lo)/2;
            if(isTrue(a,n,x,mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if(isTrue(a,n,x,hi))
        {
            cout<<hi<<"\n";
        }
        else
        {
            cout<<lo<<"\n";
        }
    
    }
  return 0;
 }