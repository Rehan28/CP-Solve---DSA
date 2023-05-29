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
        vector<pair<ll,ll>> vp;
        for(int i=0;i<n;i++)
        {
            vp.push_back(make_pair(a[i],i));
        }
        sort(vp.begin(),vp.end()); 
       vector<pair<ll,ll>> vp1;
        for(int i=0;i<n-1;i++)
        { 
            ll x = vp[i].first;
            ll y = vp[i+1].first;
            ll point = vp[i+1].second;
            if(y%x!=0)
            {
                ll res = (x-(y%x));
                ll gap = y + res;
                //cout<<point+1<<" "<<res<<"\n";
                point++;
                vp1.push_back(make_pair(point,res));
                vp[i+1].first = gap;
            }
        }
        ll si = vp1.size();
        cout<<si<<"\n";
        for(int i=0;i<si;i++)
        {
            ll x = vp1[i].first;
            ll y = vp1[i].second;
            cout<<x<<" "<<y<<"\n";
        }
        

    }
  return 0;
 }