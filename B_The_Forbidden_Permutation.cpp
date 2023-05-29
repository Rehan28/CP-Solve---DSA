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
        int n,m,d;
        cin>>n>>m>>d;
        map<int,int> mp;
        for(int i=1;i<=n;i++)
        {
            int in;
            cin>>in;
            mp[in] = i;
        }
        int b[m];
        for(int i=0;i<m;i++)
        {
            int in;
            cin>>in;
            b[i] = mp[in];
        }
        int res = 10000000;
        for(int i=0;i<m-1;i++)
        {
            int aa = b[i];
            int aa1 = b[i]+d;
            int bb = b[i+1];
            int pp = 0;
            //cout<<aa<<" "<<bb<<" "<<aa1<<" \n";
            if(aa>=bb or aa1<bb)
            {
                res = 0;
                break;
            }
            else
            {
              
               int xx = bb - aa;
               int yy = aa1 - bb + 1;
               int xx1 = 10000000;
               int yy1 = 10000000;
               if(xx<=(bb-aa))
               {
                xx1 = xx;
               }
               if(yy<((n-bb)+(aa)))
               {
                yy1 = yy;
               }
               //cout<<xx1<<" "<<yy1<<"\n";
               pp = min(xx1,yy1);
            }
            if(res>pp)
            {
                res = pp;
            }
        }
        cout<<res<<"\n";
    }
  return 0;
 }