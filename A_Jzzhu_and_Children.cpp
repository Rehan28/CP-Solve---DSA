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
ll mod = 10e9 + 7;
//Muku28
int main()
{
    Muku28();
    
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(make_pair(x,(i+1)));
        }
        int res;
        //dbg(v.size());
        for(int i=0;i<v.size();i++)
        {
            //cout<<i<<"\n";
            if(v.size()-1==i)
            {
              
              res = v[i].second;
              break;
            }
            int x = v[i].first - m;
            if(x>0)
            {
                v.push_back(make_pair(x,v[i].second));
            }

        }
        cout<<res<<"\n";
        
    
  return 0;
 }