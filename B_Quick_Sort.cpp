#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        cinv(v,n);
        int j = 0;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]= i;
        }
        int f = n;
        for(int i=1;i<n;i++)
        {
           //cout<<mp[i]<<" "<<mp[i+1]<<"\n";
            if(mp[i]>mp[i+1])
            {
                f = i;
                break;
            }
            
        }
        int res = (n-f)/k;
        if((n-f)%k!=0)
        {
            res++;
        }
        cout<<res<<"\n";
    }
  return 0;
 }