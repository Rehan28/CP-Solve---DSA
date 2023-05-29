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
        int sum = 0;
        vector<int> v;
        vector<int> v1;
        map<int, int> mp;
        map<int, int> mp1;
        for (int i = 1; i <= n;i++)
        {
            v1.push_back(i);
        }
            for (int i = n - 1; i > -1; i--)
            {
                for (int j = i; j > -1; j--)
                {
                    
                    int x = ((sum + v1[j]) % n) + 1;
                    if (mp[x] == 0)
                    {
                        mp[x] = 1;
                        //int y = x+1;
                       //dbg(i);
                        //dbg(j);
                        v.push_back(v1[j]);
                        sum += v1[j];
                        swap(v1[i], v1[j]);
                        break;
                    }
                    else
                    {
                      dbg()
                    }
                    
                }
            }
            for (int i = 0; i < n;i++)
            {
                cout << v[i] <<" ";
            }
            nl;
    }
  return 0;
 }