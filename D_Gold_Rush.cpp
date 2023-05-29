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
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//Muku28
bool Y(int n,int m)
{
  
  if(n==m)
  { 
     return true;
  }
  else if(n<m)
  {
      return false;//dbg(5);
  }
  else
  {
    int x = m * 3;
    int nn = (m/2) + m;
    //cout << x << " " << nn << "\n";
    if(Y(n,x))
    {
        return true;
    }
    if(m%2==0)
    {
       if(Y(n,nn))
        {
        return true;
       } 
    }
     return false;
    
  }
}
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(Y(n,m)) 
        {
            prints("YES");
        }
        else
        {
            prints("NO");
        }
        
    }
  return 0;
 }