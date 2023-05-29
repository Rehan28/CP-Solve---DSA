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
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n];
    cin(a,n);
    ll b[m];
    cin(b,m);
    sort(a,a+n);
    sort(b,b+m);
    ll i = 0;
    ll c = 0;
    for(ll j=0;j<m;)
    {
        ll x = a[i]+k;
        ll y = a[i] - k;
        cout<<i<<"\n";
        cout<<j<<"\n";
        if(b[j]<=x and b[j]>=y)
        {
            c++;
            
            i++;
            j++;
        }
        else if(b[j]>x)
        {
            i++;
            break;
        }
        else
        {
            j++;
        }
    }
    cout<<c<<"\n";
  return 0;
 }