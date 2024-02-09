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
void Rehan()
{
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    map<pair<int,int>,int> mp;
    for (int i = 0; i < m1;i++)
    {
        int a, b;
        cin >> a >> b;
        mp[{a, b}] = 1;
    }
    map<pair<int,int>,int> mp1;
    for (int i = 0; i < m2;i++)
    {
        int a, b;
        cin >> a >> b;
        mp1[{a, b}] = 1;
    }
    vector<pair<int, int>> vp;
    for (int i = 1; i <= n;i++)
    {
        for (int j = i + 1; j <= n;j++)
        {
            if((mp[{i,j}]==0 and mp[{j,i}]==0) and (mp1[{i,j}]==0 and mp1[{j,i}]==0))
            {
                vp.push_back(make_pair(i, j));
            }
        }
    }
    n = vp.size();
    cout << n << "\n";
    for (int i = 0; i < n;i++)
    {
        cout << vp[i].first << " " << vp[i].second << "\n";
    }
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }