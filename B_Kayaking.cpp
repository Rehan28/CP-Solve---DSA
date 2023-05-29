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
   
        int n;
        cin>>n;
        n = 2*n;
        int a[n];
        cin(a,n);
        sort(a,a+n);
        int sum = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                int sum1 = 0;
                vector<int> v;
                for(int k=0;k<n;k++)
                {
                    if(k!=i and k!=j)
                    {
                       v.push_back(a[k]);
                    }
                    
                }
                for(int k=0;k<v.size()-1;k = k+2)
                {
                    sum1 += abs(v[k] - v[k+1]);
                }
                //cout<<sum1<<"\n";
                sum = min(sum,sum1);
            }
        }
        cout<<sum<<"\n";
        for(int i=0;i<n;i++)
        {
            
        }
        
    
  return 0;
 }