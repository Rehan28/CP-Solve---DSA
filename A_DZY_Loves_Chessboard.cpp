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
ll mod = 10e9 + 7;
//Muku28
int main()
{
    Muku28();
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int c = 0;
    int t = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(s[i][j]=='.')
           {
            if(i%2)
            {
                if(j%2)
                {
                    s[i][j] = 'W';
                }
                else
                {
                    s[i][j] = 'B';
                }
            }
            else
            {
                if(j%2)
                {
                    s[i][j] = 'B';
                }
                else
                {
                    s[i][j] = 'W';
                }
            }
           }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<"\n";
    }
  return 0;
 }