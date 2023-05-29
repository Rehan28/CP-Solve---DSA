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
     int t;
    cin>>t;
   while(t--)
    {
        int m;
        cin>>m;
        int b[m];
        map<int,int> mp;
        vector<int> v;
       for(int i=0;i<m;i++)
        {
            int n;
            cin>>b[i];
            n = b[i];
            for(int i=0;i<n;i++)
            {
                int x ;cin>>x;
                v.push_back(x);
            }
        }
        int a[m];
        int tt = m-1;
        int c = 0;;
        bool f = true;
        for(int i=v.size()-1;i>-1;i--)
        {
           mp[v[i]]++;
           if(mp[v[i]]==1 and c == 0)
           {
            a[tt] = v[i]; //dbg(v[i]);
            c = 1;
           }
           b[tt]--;
          
           if(b[tt]==0)
           {
            if(c==0)
            {
                f = false;
                break;
            }
            tt--;
            c = 0;;
           }
        }
        //a[m-1] = v[v.size()-1];
        if(f)
        {
            for(int i=0;i<m;i++)
            {
                cout<<a[i]<<" ";
            }
            nl;
        }
        else
        {
            printi(-1);
        }
        
    }
  return 0;
 }