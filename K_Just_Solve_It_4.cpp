#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define all(x) x.begin(), x.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

//Muku28
int Rehan(){
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    ll gc = __gcd(n, m);
    if((n/gc)>(r/m)){
        cout << 0 << "\n";
        return 0;
    }
    ll lc = (n / gc) * m;
    ll one_to_l = (l-1) / lc;// Exact l divisor hoilye para nai (l-1)
    ll one_to_r = r / lc;
    cout << one_to_r - one_to_l << "\n";

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }