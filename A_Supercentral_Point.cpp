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
   
        int n;
        cin>>n;
        vector<pair<int,int>> vp;
        
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            vp.push_back(make_pair(x,y));
           
        }
        int c = 0;
        for(int i=0;i<n;i++)
        {
            int x = vp[i].first;
            int y = vp[i].second;
            bool f1 = false;
            bool f2 = false;
            bool f3 = false;
            bool f4 = false;
            for(int i=0;i<n;i++)
            {
                if(y>vp[i].second and x==vp[i].first)
                {
                    f1 = true;
                }
                if(y<vp[i].second and x==vp[i].first)
                {
                    f2 = true;
                }
                if(x>vp[i].first and y==vp[i].second)
                {
                    f3 = true;
                }
                if(x<vp[i].first and y==vp[i].second)
                {
                    f4 = true;
                }
            }
            if(f1==true and f2==true and f3==true and f4==true)
            {
                //dbg(i);
                c++;
            }
            
        }
        cout<<c<<"\n";
        
        
    
  return 0;
 }