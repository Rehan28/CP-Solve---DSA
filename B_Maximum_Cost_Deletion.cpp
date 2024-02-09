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
        cin >> n;
        vector<vector<int>> A;
        for (int i = 0; i < n;i++)
        {
            int a, b;
            cin >> a >> b;
            A[i].push_back(a);
            A[i].push_back(b);
        }
            vector<pair<int, int>> vp;
        for (int i = 0; i < A.size(); i++)
        {
            int a = A[i][1];
            int b = A[i][0];
            vp.push_back(make_pair(a, b));
    }
    sort(vp.begin(),vp.end());
    int ans = 1;
    int set = vp[0].first;
    for(int i=1;i<vp.size();i++)
    {
        int a = vp[i].second;
        if(a>set)
        {
            ans++;
            set = vp[i].first;
        }
    }
    cout<<ans<<"\n";
    }
  return 0;
 }