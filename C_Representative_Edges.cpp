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
    int n;
    cin>>n;
    double a[n];
    cin(a,n);
    int res = INT_MAX;
    for (int i = 0; i < n;i++)
    {
        for (int j = i+1; j < n;j++)
        {
            double dif = (a[j] - a[i]);
            dif = dif / (j - i);
            double now = a[i];
            int c = 0;
            for (int k = i+1; k < n;k++)
            {
                double dif1 = (a[k] - a[i]) / (k - i);
                if(dif!=dif1)
                {
                    c++;
                }
            }
            now = a[i];
            for (int k = i-1; k > -1;k--)
            {
                double dif1 = (a[i]-a[k]) / (i - k);
                if(dif!=dif1)
                {
                    c++;
                }
            }
            res = min(c, res);
            //dbg(c);
        }
    }
    if(n==1)
    {
        res = 0;
    }
    cout << res << "\n";
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