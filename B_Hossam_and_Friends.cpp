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
        ll n,k;
        cin>>n>>k;
        ll sum = n;
        ll mx = 0;
        vector<pair<ll,ll>> vp;
        for(ll i=0;i<k;i++)
        {
            ll a,b;
            cin>>a>>b;
            if(b<a)
            {
                swap(a,b);
            }
            vp.push_back(make_pair(a,b));
        }
        sort(vp.begin(),vp.end());
        unique(vp.begin(), vp.end());
        map<ll,ll> mp;
        ll hi = 0;
        for(ll i=vp.size()-1;i>-1;i--)
        {
           ll a = vp[i].first;
           ll b = vp[i].second;
           mp[a] = b;
            if(mx<a)
            {
                mx = a;
            }
            if(hi<b)
            {
                hi = b;
            }
        }
        
        for(ll i=1;i<=k;i++)
        {
            ll dis = mp[i] - i;
            if(mp[i]==0)
            {
                dis = n-i;
                sum += dis;
                continue;
            }
            //dis = max()
           // cout<<mp[i]<<" "<<i<<"\n";
            ll x = dis;
            ll y = dis-1;
            sum += y;
        }

        cout<<sum<<"\n";
       
    }
  return 0;
 } 