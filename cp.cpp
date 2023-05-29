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
    ll i = 0;
   while(t--)
    {
        i++;
        ll n,p;
        cin>>n>>p;
        map<ll,ll> mp;
        for(ll i=1;i<=n;i++)
        {
            mp[i] = 1;
        }
        ll x = n/2; 
        cout<<"Case "<<i<<": ";
        ll res = -1;
        ll op = 0;
        for(ll i=n;i>0;i--)
        {
            ll y = i;
            //cout<<"i is :: "<<i<<"\n";
            ll c = 0;
            c = n/i;
            mp[i] = c;
            c--;
            //cout<<c<<"\n"; 
            while(1)
            {
                y = y + i;
                if(y>n or c==0)
                {
                    break;
                }
                c--;
                if(c>0)
                {
                      mp[i] = mp[i] + (c - (mp[y]-1)); 
                }
                op++;
                //cout<<mp[i]<<"\n"; 
            }
           
            if(mp[i]>=p)
            {
                res = i;
                break;
            }
        }
       cout<<res<<"\n";
       cout<<op<<"\n";
        
    }
  return 0;
 }