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
      vector<vector<int>> a(n);
      vector<vector<int>> b(n);
        int c = 1;
       for(int i=0;i<n;i++)
       {
        a[i] = vector<int>(n);
        for(int j=0;j<n;j++)
        {
            a[i][j] = c;
            c++;
        }
       }

    for(int j=0;j<n/2;j++)
    {

        for(int i=0;i<n;i++)
        {
            cout<<a[i][j+2]<<" ";
        }
        nl;
        for(int i=n-1;i>-1;i--)
        {
            cout<<a[i][j]<<" ";
        }
       nl;
    }
  
    if(n%2)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i][n-1]<<" ";
        }
    }
    }
  return 0;
 }