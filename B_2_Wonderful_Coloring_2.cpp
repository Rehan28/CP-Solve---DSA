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
int ff = 1e5;
//Muku28
int Rehan()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    if(n==1)
    {
        cout << k << "\n";
        return 0;
    }
    vector<int> v[ff];
    vector<pair<int, int>> vp;
   unordered_map<int, int> mp;
    for (int i = 0; i < n;i++)
    {
        v[a[i]].push_back(i);
        mp[a[i]]++;
    }
    for(auto x:mp)
    {
        vp.push_back(make_pair(x.second, x.first));
        //cout << x.second << " " << x.first << "\n";
    }

    int set = n / k;
    unordered_map<int, int> res; 
    int kk = 1;
    vector<int> sin;
    for (int j = 0; j < vp.size(); j++)
    {
        int xx = vp[j].second;
        int yy = vp[j].first;
        //dbg(xx);
       if(yy>=k)
       {
           for (int i = 0; i < k;i++)
           {
               res[v[xx][i]] = i + 1;
           }
       }
       else
       {
        for (int i = 0; i < yy;i++)
        {
            sin.push_back(v[xx][i]);
        }
       }
          
    }
    int xy = sin.size();
    int i = 0;
    while(1)
    {
        if(xy>=k)
        {
        for (int j = 1; j <= k;j++)
        {
            res[sin[i]] = j;
            i++;
            xy--;
        }
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    nl;
    return 0;
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