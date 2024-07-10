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
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    ll gc = a[0];
    for (int i = 0; i < n;i++){
        gc = __gcd(a[i], gc);
    }
    int number_of_divisor = 1; 
   //cout << gc << "\n";
    int x = 2;
    while (gc>1){
        int power = 0;
        ll spf = gc;
        for (int i = x; 1LL*i*i <= gc;i++){
            if(gc%i==0){
                spf = i;
                x = i;
                break;
            }
        }
        while(gc%spf==0){
            power++;
            gc /= spf;
        }
        number_of_divisor *= (power + 1);
    }
    // for (int i = 1; 1LL * i * i <= gc;i++){
    //     if(gc%i==0){
    //         number_of_divisor++;
    //         if(i*i!=gc){
    //             number_of_divisor++;
    //         }
    //     }
    // }
    cout << number_of_divisor << "\n";
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