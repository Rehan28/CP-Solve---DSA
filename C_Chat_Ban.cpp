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
    ll k,x;
    cin>>k>>x;
    ll hi = (2 * k) - 1;
    ll lo = 0;
    ll mid;
    ll lastsum = 0;
    while (lo<hi)
    {
        mid = lo + (hi - lo + 1) / 2;
        ll sum = 0;
        if(mid>k)
        {
            sum += ((k + 1) * k) / 2;
            ll xx = mid - k;
            ll baki = (k - 1) - xx;
            baki = ((baki + 1) * baki) / 2;
            xx = ((k) * (k-1)) / 2;
            sum += (xx - baki);
        }
        else
        {
            sum += ((mid + 1) * mid) / 2;
        }
        //cout <<mid<<" "<< sum << "\n";
        if(sum<=x)
        {
            lo = mid;
            lastsum = sum;
        }
        else
        {
            hi = mid-1;
        }
    }
    //cout << lastsum << "\n";
    if(lastsum!=x and (lo)!=(2*k)-1)
    {
        lo++;
    }
    cout << lo << "\n";
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