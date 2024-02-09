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
    ll n;
    string s;
    cin>>n;
    cin >> s;
    ll a[n];
    cin(a,n);
     ll sum = 0;
    for (int i = 0; i < n;i++)
    {
        int aa = 0;
        int h = 1;
        int r = 0;
        int d = 0;
        int c = 0;
        int xx = 0;
        int pos = 0;
        map<char, ll> mp;
        while (i<n)
        {
            
            if(s[i]=='h' and h==1)
            {
                mp[s[i]] += a[i];
                aa = 1;
            }
            else if(s[i]=='a' and aa==1)
            {
                
                r = 1;
                h = 0;
                mp[s[i]] += a[i];
            }
            else if(s[i]=='r' and r==1)
            {
                c++;
                d = 1;
                aa = 0;
                mp[s[i]] += a[i];
            }
            else if(s[i]=='d' and d==1)
            {
                r = 0;
                c++;
                mp[s[i]] += a[i];
                xx++;
                i++;
                continue;
            }
            if(h==0 and s[i]=='h' and xx==0)
            {
                pos = i;
            }
            if(xx==0)
            {
                i++;
            }
            if(mp['h']!=0 and mp['a']!=0 and mp['r']!=0 and mp['d']!=0)
            {
                break;
            }
        }
        i -= 1;
        //cout << pos << "\n";
        if(pos!=0)
        {
            i = pos-1;
            continue;
        }
        ll hh = mp['h'];
        ll aaa = mp['a'];
        ll rr = mp['r'];
        ll dd = mp['d'];
        //cout << i << "\n";
        if(i<=n)
        {
            sum += min(hh, min(aaa, min(rr, dd)));
        }
       
    }
    cout << sum  << "\n";
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