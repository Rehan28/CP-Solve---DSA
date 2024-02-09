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
 ll n = 10000007;
 vector<char> is_prime(n+1,true);
 vector<ll> a(n,0);
 void seive(ll n)
 {
        is_prime.resize(n + 1);
        for (ll i = 3; i*i<= n; i += 2)
        {
            if (is_prime[i])
            {    
             for (ll j = i * i; j <= n; j += 2 * i)
             {
              is_prime[j] = false;
             }
            }
        }
 }
void Rehan()
{
        ll N;
        cin >> N;
        cout << a[N] << "\n";
}
//--------------28--------------//
int main()
{
    //Muku28();
        seive(n);
       
        for (ll i = 1; i < 4000;i++)
        {
            for (ll j = 1; j <= 80;j++)
            {
             ll x = (i * i) + (j * j * j * j); 
           // cout << x << "\n";
             if(x>n)
             {
                break;
             }
             if(is_prime[x]==true and (x%2 or x==2))
             {
                a[x] = 1;
            }
            }
        }
        //cout << 5 << "\n";
        for (ll i = 1; i <=n;i++)
        {
            a[i] = a[i - 1] + a[i];
            //cout << a[i] << "\n";
        }

        int t = 1;
        cin>>t;
        while (t--)
        {
            Rehan();
        }
  return 0;
 }