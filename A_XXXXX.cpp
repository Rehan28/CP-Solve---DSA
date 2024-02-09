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
    int n,x;
    cin>>n>>x;
    int a[n];
    cin(a,n);
    int y = 0;
    bool f = false;
    for (int i = 0; i < n;i++)
    {
        if(a[i]%x)
        {
            f = true;
            y = i;
            break;
        }
    }
    int sum = 0;
    for (int i = 0; i < n;i++)
    {
        sum += a[i];
    }
        if (f == false)
        {
            cout << -1 << "\n";
        }
        else if(sum%x)
        {

            cout << n << "\n";
        }
        else
        {
            for (int i = n - 1; i > -1; i--)
            {
                if (a[i] % x)
                
                {
                    f = true;
                    y = min(y, (n - 1) - i);
                    break;
                }
            }
           // dbg(y);
            y++;
            cout << n - y << "\n";
        }
    
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