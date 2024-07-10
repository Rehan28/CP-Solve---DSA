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
const int N = 1e5 + 9;
int spf[N + 1];
void sp(){
    for (int i = 1; i < N;i++){
        spf[i] = i;
    }
    for (int i = 2;i<N;i++){
        for (int j = i; j < N;j+=i){
            spf[j] = min(spf[j], i);
        }
    }
}
//Muku28
int Rehan(){
    ll n;
    cin>>n;
    ll divisor = 2;
    ll d = 1;
    for (int i = 2; i <= n;i++){
        int num = i;
        while (num>1){
            int p = spf[num];
            ll power = 1;
            while (num%p==0){
                num /= p;
                power++;
            }
            d = (d * (power))%mod;
        }
    }
    cout << d-n << "\n";
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    sp();
    while(t--){
        Rehan();
    }
		return 0;
 }