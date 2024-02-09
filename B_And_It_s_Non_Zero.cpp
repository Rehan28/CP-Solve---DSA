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
const int cc = 2e5 + 5;
int a[31][cc];
//Muku28
void Rehan()
{
    int n,m;
    cin>>n>>m;
    int mx = INT_MIN;
    for (int i = 0; i <= 30;i++)
    {
        //cout << (a[i][m] - a[i][n - 1]) << "\n";
        mx = max(mx, (a[i][m] - a[i][n-1]));
    }
    //dbg(mx);
    cout << (m-n+1) - mx << "\n";
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    for (int i = 0; i < 30;i++)
    {
        for (int j = 1; j <= cc;j++)
        {
            if(j & (1<<i))
            {
                a[i][j]++;
            } 
            a[i][j] += a[i][j - 1];
        }
    }
    cin >> t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }