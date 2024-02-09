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
    string s;
    cin >> s;
    int a[n+1] = {0};
    int m = 0;
    int t = 0;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='T')
        {
            a[i + 1] = a[i] + 1;
            t++;
        }
        else
        {
            a[i + 1] = a[i] - 1;
            m++;
        }
    }
    int b[n+1] = {0};
    for (int i = n-1; i>-1;i--)
    {
        if(s[i]=='T')
        {
            b[i] = b[i+1] + 1;
        }
        else
        {
            b[i] = b[i+1] - 1;
        }
    }
    if((2*m)!=t)
    {
        no;
        return 0;
    }
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='M' and (a[i+1]==-1 or b[i]==-1))
        {
            no;
            return 0;
        }
    }
    yes;
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