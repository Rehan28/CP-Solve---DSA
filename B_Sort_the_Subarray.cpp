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
        int n;
        cin>>n;
        int a[n];
        cin(a,n);
        int b[n];
        cin(b, n);
        int res1 = 0, res2 = 0;
        int mx = 0;
        int c = 0;
        for (int i = 0; i < n-1;i++)
        {
            if(b[i]<=b[i+1])
            {
                c++;//dbg(i);
            }
            else if(b[i]>b[i+1])
            {
                if(c>mx)
                {
                    
                    mx = c;
                    res1 = i - c;
                    res2 = i;
                }
                c = 0;
            }
            if(i==n-2)
            {
                c++;
                if(c>mx)
                {
                    mx = c;
                    c--;
                    res1 = i - c;
                    res1++;
                    res2 = i+1;
                }
                c = 0;
            }
            
        }
        cout << res1 + 1 << " " << res2 + 1 << "\n";
    }
  return 0;
 }