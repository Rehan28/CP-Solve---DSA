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
ll N = 1000007;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}

vector<char> is_prime(N,true);
vector<ll> a(N, 0);
void seive(ll n)
{
  
    for (ll i = 3; i*i <=n; i+=2)
    { 
      if (is_prime[i] == true)
      {
          //cout << i << "\n";
          for (ll j = i * i; j <= n; j += 2*i)//2*i means That all even number are ignored
          {
            is_prime[j] = false;
          }
      }
    }
}
//Muku28
void Rehan()
{
    int n;
    cin>>n;
    cout << a[n] << "\n";
}
//--------------28--------------//
int main()
{
   // Muku28();
    seive(N);
    a[2] = 1;
    for (ll i = 3; i <= 20;i+=2)
    {
        if(is_prime[i])
        {
          string s = to_string(i);
          bool f = true;
          for (ll j = 0; j < s.size();j++)
          {
            if(s[j]=='0')
            {
                f = false;
                break;
            }
          }
          for (int j=0; j < s.size();j++)
          {
            string ss = s.substr(j);
            ll rehan = stoi(ss);
            //cout << rehan << "\n";
            if(!is_prime[rehan])
            {
                f = false;
            }
          }
            if (f)
            {
                a[i] = 1;
            }
        }
    }
    for (int i = 2; i <= N;i++)
    {
        a[i] = a[i] + a[i - 1];
    }
        int t = 1;
        cin>>t;
        while(t--)
        {
            Rehan();
        }
        return 0;
 }