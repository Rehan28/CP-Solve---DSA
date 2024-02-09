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
    int a[n];
    cin(a,n);
    string s = "";
    vector<int> v;
    int y = sqrt(n);
    y++;
    for (int i = 1; i < y;i++)
    {
        if(n%i==0)
        {
            v.push_back(n / i);
            if((n/i)!=i)
            {
                v.push_back(i);
            }
            
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
            if (a[i] % 2)
            {
                s += '1';
            }
            else
            {
                s += '0';
            }
    }
    int ans = 1;
    //cout << v.size() << "\n";
    for (int i = 1; i < v.size();i++)
    {
        int ss = a[0];
        int x = v[i];
        for (int j = 0; j <x;j++)
        {
            ss = __gcd(ss,a[j]);
        }
        int total = ss;
        bool f = true;
        while (x<n)
        {
            int xx = x + v[i];
            int s1 = a[x];
            for (int j = x; j < xx;j++)
            {
                s1 = __gcd(s1,a[j]);
            }
            if(s1!=total)
            {
                f = false;
                break;
            }
            x = xx;
        }
        if(f or total<2)
        {
            //cout <<" "<< v[i] << "\n";
            ans++;
        }
        
    }
    int gc = a[0];
    for (int i = 1; i < n;i++)
    {
        gc = __gcd(gc, a[i]);
    }
    if(gc>1)
    {
        int x1 = v.size();
        ans = max(x1, ans);
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