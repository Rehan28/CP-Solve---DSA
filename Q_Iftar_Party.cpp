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

//--------------28--------------//
int main()
{
    Muku28();
    int t;
    cin >> t;
    for (int i = 1; i <= t;i++){
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        ll x = n - k;
        for (ll j = 1; j * j <= x;j++){
            if(x%j==0){
                v.push_back(j);
                if(j*j!=x){
                    v.push_back(x/j);
                }
            }
        }
        if(v.size()){
            cout << "Case " << i << ": ";
            bool f = true;
            sort(v.begin(), v.end());
            for (int j = 0; j < v.size();j++){
                if(n%v[j]==k){
                    cout << v[j] << " ";
                    f = false;
                }
            }
            if(f){
                cout << "impossible";
            }
            nl;
        }
        else{
            cout << "Case " << i << ": impossible\n";
        }
    }
    return 0;
 }