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
    int n,m;
    cin>>n>>m;
    int v[n + 1] = {0};
    int vul[n + 1] = {0};
    int res = n;
    for (int i = 0; i < m;i++)
    {
        int a, b;
        cin >> a >> b;
        v[a]++;
        v[b]++;
        if(a<b)
        {
            vul[a]++;
            v[b]--;
        }
        if(b<a)
        {
            vul[b]++;
            v[a]--;
        }
    }
    for (int i = 1; i <= n;i++)
    {
        if(vul[i]==v[i] and v[i]!=0)
        {
            res--;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q;i++)
    {
        int x;
        cin >> x;
        if(x==3)
        {
            cout << res << "\n";
        }
        else
        {
            int a, b;
            cin >> a >> b;
            if(x==1)
            {
                v[a]++;
                v[b]++;
                if(a<b)
                {
                    vul[a]++;
                    v[b]--;
                }
                if(b<a)
                {
                    vul[b]++;
                    v[a]--;
                } 
                if(vul[a]==v[a] and v[a]!=0)
                {
                    res--;
                    continue;
                }
                if(vul[b]==v[b] and v[b]!=0)
                {
                    res--;
                }
             }
            else
            {
                if(a<b)
                {
                    vul[a]--;
                }
                if(b<a)
                {
                    vul[b]--;
                }
                if(vul[a]!=v[a])
                {
                    res++;
                }
                if(vul[b]!=v[b])
                {
                    res++;
                }
            }
        }
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