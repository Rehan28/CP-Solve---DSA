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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int N = 1e5 + 9;
    int spf[N + 1];
    for (int i = 2; i <= N;i++){
        spf[i] = i;
    }
     for (int i = 2; i * i <= N; i++){
        for (int j = i; j <= N; j += i){
            spf[j] = min(spf[j], i);
        }
    }   
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        ll xx = n;
        ll divisor_sum = 1;
        while(n>1){
            int p = spf[n];
            int prime_power = 1;
            while (n%p==0){
                prime_power *= p;
                n /= p;
            }
            // dbg(prime_power);
            // dbg(p);
            divisor_sum *= ((1LL * prime_power * p) - 1) / (p - 1);
        }
        cout << divisor_sum - xx<< "\n";//n bade sum korte bolche
    }
		return 0;
 }