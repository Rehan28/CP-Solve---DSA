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
    cout.precision(7); cout.setf(ios::fixed);
    int n;
    long double d, h;
    cin >> n >> d >> h;
    long double a[n];
    cin(a, n);
    long double area = 0.0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i] + h) > a[i + 1])
        {
            long double ratio = ((a[i]+h)-a[i+1]) / h;
            long double d2 = ratio * d;

            area += ((d + d2) * 0.5) * (a[i + 1] - a[i]);
            //cout << area << "\n";
        }
        else
        {
            area += (0.5 * d * h);
        }
    }
    area += (0.5 * d * h);
    cout << area << "\n";    
}
//--------------28--------------//
int main()
{
    Muku28();
    int __ = 1;
    cin>>__;
    while(__--)
    {
        Rehan();
    }
		return 0;
 }