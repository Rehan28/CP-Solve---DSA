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
    string a, b;
    cin >> a >> b;
    string s;
    s += a[0];
    s += a[1];
    int x = stoi(s);
    int xx = x;
    x *= 60;
    
    string s1;
    s1 += a[3];
    s1 += a[4];
    x += stoi(s1);
    string s2;
    s2 += b[0];
    s2 += b[1];
    int y = stoi(s2);
   
    if(y==0 and xx!=0)
    {
        y = 24;
    } 
   
    y *= 60; 
    string s3;
    s3 += b[3];
    s3 += b[4];
    y += stoi(s3);


    int res = y - x;
    if(y<x)
    {
        res = abs(x - (y+(24*60)));
    }
    res = res / 2;
    int mn;
    if((x+res)/60>=24)
    {
        res += x;
        mn = res % 60;
        res /= 60;
        res = res - 24;
    }
    else
    {
      res += x;
      mn = res % 60;
      res = res / 60;
    }
    
    if(res<10)
    {
        cout << 0 << res << ":";
    }
    else
    {
        cout << res << ":";
    }
    if(mn<10)
    {
        cout << 0 << mn << "\n";
    }
    else
    {
        cout << mn << "\n";
    }
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