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
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    ll b[n+1];
    map<int, int> mp;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    int mex = 0;
    for (int i = 0; i < n;i++)
    {
        mex = 0;
        while (1)
        {
            if (mp[mex] == 0)
            {
                mp[a[i]] = 0;
                a[i] = mex;
                mp[mex] = 1;
                break;
            }
            mex++;
        }

    }
        if (k == 1)
        {
            for (int i = 0; i < n;i++)
            {
                cout << a[i] << " ";
            }
    }
    else{
        
        k--;
        if (k > n + 1)
        {
            k = k % n;
        }
        if(k%n!=0)
        {
            k--;
        }
        vector<int> v;
        vector<int> v1;
        int t = 0;
        int j = 1;
        for (int i=k;i<n;i++)
        {
            v.push_back(a[i]);
            t++;
           // cout << k << "\n";
            if(t==n)
            {
                break;
            }
        }
        //cout << "rehan : " << k << "\n";

        
        int xx = 0;
        while (t<n-1)
        {
            if(xx==k or xx==(k-n))
            {
                xx++;
                continue;
            }
            v1.push_back(a[xx]);
            xx++;
            t++;
        }
        if(t<n)
        {
            v1.push_back(a[n - 1]);
            t++;
        }
        for (int i = 0; i < v1.size();i++)
        {
            cout << v1[i] << " ";
        }
        for (int i = 0; i < v.size();i++)
        {
            cout << v[i] << " ";
        }
    }
    nl;
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