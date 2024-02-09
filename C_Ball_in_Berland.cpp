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
    int n,m,k;
    cin>>n>>m>>k;
    int a[k];
    cin(a,k);
    int b[k];
    cin(b,k);
    map<int, int> aa;
    map<int, int> bb;
    map<pair<int, int>, int> ab;
    for (int i = 0; i < k;i++)
    {
        aa[a[i]]++;
        bb[b[i]]++;
        ab[{a[i], b[i]}]++;
    }
    ll sum = 0;
    for (int i = 0; i < k-1;i++)
    {
        int x = k - i;
        x--; 
        aa[a[i]]--;
        bb[b[i]]--;
        ab[{a[i], b[i]}]--;
        int y = aa[a[i]];
        y += bb[b[i]];
        y -= ab[{a[i], b[i]}];
       // dbg(sum);
        sum += (x - y);
       
    }
    cout << sum << "\n";
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