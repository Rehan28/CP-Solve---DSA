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
bool comp(pair<string,int> a, pair<string,int> b) {
   if(a.second==b.second)
   {
       return a.first < b.first;
   }
   return a.second > b.second;
}
//Muku28
int main()
{
    Muku28();
    int n;
    cin >> n;
    vector<pair<string, int>> vp;
    for (int i = 0; i < n;i++)
    {
        int x;
        string s;
        cin >> s >> x;
        vp.push_back(make_pair(s, x));
    }
    sort(vp.begin(), vp.end(),comp);
    for (int i = 0; i < n;i++)
    {
        cout << vp[i].first << " " << vp[i].second << "\n";
    }

        return 0;
 }