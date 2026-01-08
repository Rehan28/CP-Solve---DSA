#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "No"<<nl;
#define yes cout << "Yes"<<nl;


void solve(int test) {
    ll n, a, b;
    cin >> n >> a >> b;
    if((n-1)%b==0){
        yes;
    }
    else{
        vector<ll> pw;
        ll x = a;
        while(1){
            pw.push_back(a);
            a *= x;
            if(a>n or a==1){
                break;
            }
        }
        for (int i = 0; i < pw.size();i++){
            if(pw[i]==n){
                yes;
                return;
            }
            ll xx = n - pw[i];
            if(xx>=0 and xx%b==0){
                
                yes;
                return;
            }
        }
        no;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
