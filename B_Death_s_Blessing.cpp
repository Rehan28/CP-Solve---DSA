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
        int n;
        cin>>n;
        vector<ll> a;ll sum = 0;
        for(int i=0;i<n;i++)
        {
            ll v;
            cin>>v;
            sum += v;
            a.push_back(v);
        }
        vector<pair<ll,ll>> vp;
        for(ll i=0;i<n;i++)
        {
            ll b;
            cin>>b;
            vp.push_back(make_pair(b,i));
        }
        sort(vp.begin(),vp.end());
        
        //cout<<sum;
        
        for(ll i=0;i<n;i++)
        {
            ll y = vp[i].first;
            ll x = vp[i].second;
            //cout<<x<<"x\n";
            //cout<<y<<"y\n";
            if(i==n-1)
            {
                
            }
            else{
                sum+=y;
            }
            //sum+= v[x];
            //v.erase(v.begin()+x);
            //cout<<v[x]<<" ";
        }
       
        cout<<sum<<"\n";

    }
  return 0;
 }