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
int Rehan()
{
    int n;
    cin>>n;
    map<string, int> mp;
    int sum = n;
    for (int i = 0; i < n;i++)
    {
        string s, s1;
        cin >> s >> s1;
        mp[s1]++;
    }
    vector<int> v;
    for(auto x:mp)
    {
        v.push_back(x.second);
    }
    int xx = 1;
    for (int k = 0; k < v.size();k++)
    {
        xx = 1;
        for (int i = 0; i <=k;i++)
        {
            xx *= v[i];
        }
        dbg(xx);
        for (int i = k + 1; i < v.size();i++)
        {
            cout << "djfhd\n";
            for (int j = i; j < v.size();j++)
            {
                 sum += (xx * v[j]);
                 dbg((xx * v[j]));
            }
               
        }
    }
       
    cout << sum << "\n";
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