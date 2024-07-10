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

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = 0;
        // for (ll i = 1; i * i <= n;i++){
        //     if(i>a)break;
        //     if(n%i==0){
        //         ll x = n/i;
        //         for (ll j = 1; j * j <= x;j++){
        //             if(x%j==0){
        //                 ll sec = j;
        //                 ll last = x / j;
        //                 if(sec<=b and last<=c){
        //                     ans++;
        //                 }
        //                 if(last<=b and sec<=c){
        //                     if(last==sec){
        //                         ans--;
        //                     }
        //                     ans++;
        //                 }
        //             }
        //         }
        //         if(i*i!=n){
        //             x = i;
        //             //cout << " " << x << "\n";
        //             if((n/i)<=a){
        //                 for (ll j = 1; j * j <= x;j++){
        //                     if(x%j==0){
        //                         ll sec = j;
        //                         ll last = x / j;
        //                         if(sec<=b and last<=c){
        //                             ans++;
        //                         }
        //                         if(last<=b and sec<=c){
        //                             if(last==sec){
        //                                 ans--;
        //                             }
        //                             ans++;
        //                         }
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }
        vector<int> divisor;
        for (int i = 1; i * i <= n;i++){
            if(n%i==0){
                divisor.push_back(i);
                if(i*i!=n){
                    divisor.push_back(n / i);
                }
            }
        }
        for (auto x:divisor){
            for(auto y : divisor){
                if(n % (1LL*x*y)==0){
                    int z = n / (x * y);
                    if(x<=a and y<=b and z<=c){
                        ans++;
                    }
                }
            }
        }
            cout << ans << "\n";
    }
	return 0;
 }