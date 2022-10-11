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
    ll n;
    cin>>n;
    ll v[n];
    ll a[n];
    rep(i,0,n)
    {
        cin>>v[i];
        a[i] = v[i];
    }

    sort(a,a+n);

    ll psum1[n];
    psum1[0] = v[0];
    for(int i=1;i<n;i++)
    {
        psum1[i] = psum1[i-1] + v[i];
    }

    ll psum2[n];
    psum2[0] = a[0];
    for(int i=1;i<n;i++)
    {
        psum2[i] = psum2[i-1] + a[i];
    }

    ll m;
    cin>>m;
    while(m--)
    {
        int type,l,r;
        cin>> type >> l>> r;
        if(type==1)
        {
            ll res;
            if(l==1)
            {
                res = psum1[r-1];
            }
            else
            {
                res = psum1[r-1] - psum1[l-2];
            }
            cout<<res<<"\n";
        }
        else
        {
            
            ll res;
            if(l==1)
            {
                res = psum2[r-1];
            }
            else
            {
                res = psum2[r-1] - psum2[l-2];
            }
            cout<<res<<"\n";
        }
    }
  return 0;
 }