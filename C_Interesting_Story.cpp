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
    string s[n];
    int v[5+1][n+1];
    int a[n + 1];
    for (int i = 0; i < n;i++)
    {
        cin >> s[i];
        a[i] = s[i].size();
        for (int j = 1; j <= 5;j++)
        {
            v[j][i] = 0;
        }
        for (int j = 0; j < s[i].size();j++)
        {
            if(s[i][j]=='a')
            {
                v[1][i]++;
            }
            else if(s[i][j]=='b')
            {
                v[2][i]++;
            }
            else if(s[i][j]=='c')
            {
               v[3][i]++;
            }
            else if(s[i][j]=='d')
            {
               v[4][i]++;
            }
            else
            {
                v[5][i]++;
            }
        }
        //cout << v[1][i] << " ";
    }
    int ans = 0;
    for (int i = 1; i <= 5;i++)
    {
        int dif[n] = {0};
        for (int j = 0; j < n;j++)
        {
            int x = abs(v[i][j] - a[j]);
            dif[j] = x - v[i][j];
        }
        sort(dif, dif + n);
        int xx = 0;
        int now = 0;
        for (int i = 0; i < n;i++)
        {
            xx += dif[i];
            if(xx>=0)
            {
                break;
            }
            now++;
        }
        ans = max(ans, now);
    }
    cout << ans << "\n";
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