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
    ll n;
    cin>>n;
    ll a[n];
    cin(a, n);
    map<ll, ll> mp;
    map<ll, ll> mp1;
    int f = 1;
    for (int i = 0; i < n;i++)
    {
        mp1[a[i]]++;
        //cout << mp1[a[i]] << "\n";
    }
    for (auto x : mp1)
    {
        ll point = x.first;
        //cout << x.second << "\n";
        while(point<=n)
        {
            mp[point] += x.second;
            point += x.first;
            //cout << point << "\n";
        }
    }   
    ll res = 0;
    for (auto x: mp)
    {
        if(res<x.second)
        {
            res = x.second;
        }
    }
    cout << res << "\n";
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }