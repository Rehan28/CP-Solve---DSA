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
    int n, m;
    cin >> n >> m;
    int a[m], b[m], c[m];
    map<int, int> mp;
    for (int i = 0; i < m;i++)
    {
        map<int, int> mp1;
        cin >> a[i] >> b[i] >> c[i];
        if(mp[a[i]]>0)
        {
            mp1[mp[a[i]]] = 1;
        }
        if(mp[b[i]]>0)
        {
             mp1[mp[b[i]]] = 1;
        }
        if(mp[c[i]]>0)
        {
             mp1[mp[c[i]]] = 1;
        }

        //////////////////
        if(mp[a[i]]==0)
        {
            for (int j = 1; j <= 3;j++)
            {
                if(mp1[j]==0)
                {
                    mp[a[i]] = j;
                    mp1[j] = 1;
                    break;
                }
            }
        }
        if(mp[b[i]]==0)
        {
            for (int j = 1; j <= 3;j++)
            {
                if(mp1[j]==0)
                {
                    mp[b[i]] = j;
                    mp1[j] = 1;
                    break;
                }
            }
        }
        if(mp[c[i]]==0)
        {
            for (int j = 1; j <= 3;j++)
            {
                if(mp1[j]==0)
                {
                    mp[c[i]] = j;
                    mp1[j] = 1;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <=n;i++)
    {
        if(mp[i]==0)
        {
            dbg(i);
            cout << 1 << " ";
        }
        else
        {
            cout << mp[i] << " ";
        }
    }
        nl;
    return 0;
 }