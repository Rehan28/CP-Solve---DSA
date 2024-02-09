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
    for (int i = 0; i < n-1;i++)
    {
        string ss;
        ss += s[i];
        ss += s[i+1];
        if(ss=="aa")
        {
            cout << 2 << "\n";
            return 0;
        }
    }
    for (int i = 0; i < n-2;i++)
    {
        string ss;
        ss += s[i];
        ss += s[i + 1];
        ss += s[i+2];
        if(ss=="aba" or ss=="aca")
        {
            cout << 3 << "\n";
            return 0;
        }
    }
    for (int i = 0; i < n-3;i++)
    {
        string ss;
        ss += s[i];
        ss += s[i + 1];
        ss += s[i + 2];
        ss += s[i+3];
        if(ss=="abca" or ss=="acba")
        {
            cout << 4 << "\n";
            return 0;
        }
    }
    for (int i = 0; i < n-6;i++)
    {
        string ss;
        ss += s[i];
        ss += s[i + 1];
        ss += s[i + 2];
        ss += s[i+3];
        ss += s[i+4];
        ss += s[i+5];
        ss += s[i+6];
        if(ss=="abbacca" or ss=="accabba")
        {
            cout << 7 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
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