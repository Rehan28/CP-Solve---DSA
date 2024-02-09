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
bool f[1000009];
int Rehan(){
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    for (int i = 2; i*i <= 1000001;i++){
        if(!f[i]){
            for (int j = i + i; j <= 1000001;j+=i){
                f[j] = true;
            }
        }
    }
    for (int i = 0; i < n;i++)
    {
        ll x = sqrt(a[i]);
        if((x*x)==a[i] and f[x]==false and a[i]!=1){
            yes;
        }
        else
            no;
    }
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