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
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,k;
        cin>>n>>k;  
        for (int i = 0; i < k - 3;i++)
             {
                 cout << 1 << " ";
             }
             n = (n - (k - 3));
             if (n % 2)
             {
                 for (int i = 0; i < k - 3; i++)
                 {
                     cout << 1 << " ";
                 }
                 int x = (n - (k - 3)) / 2;
                 cout << 1 << " " << x << " " << x << "\n";
         }
         else
         {
           
             int x = n / 2;
             if(x%2)
             {
                 cout << 2 << " "<< x - 1 << " " << x - 1 << "\n";
             }
             else
             {
                 cout << x << " " << x/2 << " " << x/2 << "\n";
             }
            
         }
        
    }
  return 0;
 }