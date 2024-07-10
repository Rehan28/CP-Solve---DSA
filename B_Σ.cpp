#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

void solve(int test) {
    ll n,k;
    cin>>n>>k;
    ll sum = (k * (k + 1)) / 2;
    //dbg(sum);
    set<ll> st;
    for (int i = 0; i < n;i++){
        ll x;
        cin >> x;
        st.insert(x);
       
    }

    for(auto it : st){
        if(it<=k){
            sum -= it;
        }
    }
    cout << sum << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
