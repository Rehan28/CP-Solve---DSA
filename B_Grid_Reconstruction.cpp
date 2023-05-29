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
        int n;
        cin>>n;
        vector<int> v;        
        vector<int> v1;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }        
        for(int i=n+1;i<=2*n;i++)
        {
            v1.push_back(i);
        }
        int c1 = 2;
        int c = n-2;
        int y1 = c+1;
        int y = 0;
        vector<int> v3[n];
         v3[1].push_back(1);
        for(int i=1;i<n;i++)
        {
         if(i%2==0)
         {
            v3[0].push_back(v[c1]);
            v3[1].push_back(v1[c]);
            c1++;
            c--;
         }
         else
         {
            v3[1].push_back(v[c1]);
            v3[0].push_back(v1[c]);
            c1++;
            c--;
         }
         
        }  
        //v3[0].push_back(v[0]);
        v3[1].push_back(v1[n-1]);
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<v3[i][j]<<" ";
            }
            nl;
        }
           
    }
        
    
  return 0;
 }