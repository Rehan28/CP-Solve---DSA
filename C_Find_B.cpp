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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    cin(a,n);
    ll pfx[n + 1];
    pfx[0] = 0;
    ll one[n + 1];
    one[0] = 0;
    for (int i = 1; i <= n;i++){
        pfx[i] = pfx[i - 1] + a[i-1];
        if(a[i-1]==1){
            one[i] = one[i - 1] + 1;
        }
        else{
            one[i] = one[i - 1];
        }
    }
    while (q--){
        int l, r;
        cin >> l >> r;
        ll sum = pfx[r] - pfx[l - 1];
        ll on = one[r] - one[l - 1];
        on *= 2;
        sum -= on;
        on /= 2;
        ll xx = r - l;
        xx++;
        ll yy = xx - on;
        //cout << sum << "\n";
        if(sum>=yy and l!=r){
            yes;
        }
        else{
            no;
        }
    }
    
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }