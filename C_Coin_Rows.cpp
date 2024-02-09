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
    int n;
    cin>>n;
    int a[2][n];
    for (int i = 0; i < 2;i++)
    {
        for (int j = 0; j < n;j++)
        {
            cin >> a[i][j];
        }
    }
    int pfx[n+1];
    pfx[n] = 0;
    for (int i = n - 1; i > 0;i--)
    {
        pfx[i] = pfx[i + 1] + a[0][i];
    }
    int sum = 0;
    int c = 0;
    for (int i = 0; i < n-1;i++)
    {
        if(c==0)
        {
            sum += a[1][i];
            if(sum>pfx[i+1])
            {
                c = 1;
                a[1][i] = 0;
            }
            else
            {
                a[0][i+1] = 0;
            }
        }
        else
        {
            a[1][i] = 0;
        }
    }
    sum = 0;
    for (int i = 1; i < n;i++)
    {
        sum += a[0][i];
    }
    int sum1 = 0;
    for (int i = 0; i < n - 1;i++)
    {
        sum1 += a[1][i];
    }
    cout << max(sum,sum1) << "\n";
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