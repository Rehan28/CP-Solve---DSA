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
    int n,m;
    cin>>n>>m;
    string s, t;
    cin >> s >> t;
    bool f = true;
    for (int i = 0; i < m-1;i++)
    {
        if(t[i]==t[i+1])
        {
            f = false;
            break;
        }
    }
    int type = 2;
    if(f)
    {
        if(t[0]=='0' and t[m-1]=='0')
        {
            type = 1;
        }
        else if(t[0]=='1' and t[m-1]=='1')
        {
            type = 0;
        }
    }
    bool ff = true;
    for (int i = 0; i < n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            if(s[i]=='1' and type!=1)
            {
                ff = false;
                break;
            }
            else if(s[i]=='0' and type!=0)
            {
                ff = false;
                break;
            }
        }
    }
    if(ff)
    {
        yes;
    }
    else
    {
        no;
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