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
int Rehan(int test){
    int n,digit;
    cin>>n>>digit;
    int modulo = digit;
    int ans = 1;
    while (1){
        if(modulo%n==0){
            break;
        }
        modulo = modulo % n;
        modulo *= 10;
        modulo += digit;
        ans++;
        // akhane ami modulo sum kore just dakhchi oita vag jay kina
    }
    cout <<"Case " <<test<<": "<<ans << "\n";

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    for (int i = 1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }