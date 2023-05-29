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
        ll n,s;
        cin>>n>>s;
        ll a[n];
        cin(a,n);
        ll sum = 0;
        rep(i,0,n)
        {
            sum += a[i];
        }
       
        ll value = 0;
        map<ll,ll> mp;
        for(ll i=0;i<s;i++)
        {
             ll t;
            cin>>t;
            
            
            if(t==1)
            {
                ll point,val;
                cin>>point>>val;
                //cout<<value<<"re\n";
                mp[point]++;
                if(mp[point]>1 or value == 0)
                {
                     sum = (sum - a[point-1]) + val;
                     a[point-1] = val;
                }
                else
                {
                    sum = (sum - value) + val;
                    a[point-1] = val;
                }
                
                cout<<sum<<"\n";
            }
            else
            {
                ll all;
                cin>>all;
                sum = (all*n);
                value = all;
                mp.clear();
                cout<<sum<<"\n";
            }
        }
       
    
  return 0;
 }