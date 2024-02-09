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
    int a[n];
    cin(a,n);
    map<int, int> mp;
    int v[n];
    for (int i = 0; i < n;i++)
    {
        mp[a[i]]++;
    }
    bool f = true;
    int t = 1;
    int c = 0;
    map<int, int> mark;
    for (int i = 0; i < n;i++)
    {
        if(mp[a[i]]==1)
        {
            v[i] = 3;
        }
        else if( mark[i]==0)
        {
            if(t==1)
            {
                v[i] = 1;
                for (int j = i + 1; j < n;j++)
                {
                    if(a[i]==a[j] and mark[j]==0)
                    {
                        v[j] = 2;
                        mark[j]++;
                    }
                }
                t = 2;
            }
            else
            {
                v[i] = 1;
                for (int j = i + 1; j < n;j++)
                {
                    if(a[i]==a[j] and mark[j]==0)
                    {
                        v[j] = 3;
                        mark[j]++;
                    }
                }
                t = 1;
            }
            c++;
        }
    }
    //dbg(c);
    if(f and c>1)
    {
        for (int i = 0; i < n;i++)
        {
            cout << v[i] << " ";
        }
        nl;
    }
    else
    {
        cout << -1 << "\n";
    }
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