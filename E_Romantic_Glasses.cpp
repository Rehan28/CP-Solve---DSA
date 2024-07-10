#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1
#define int long long

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    for (int i = 0; i < n;i = i+2){
        a[i] = -a[i];
    }
    int pfx[n];
    pfx[0] = a[0];
    map<int, int> mp;
    mp[0] = 1;
    mp[a[0]] = 1;
    for (int i = 1; i < n;i++){
        pfx[i] = pfx[i - 1] + a[i];
        if(mp[pfx[i]]){
            yes;
            return;
        }
        mp[pfx[i]] = 1;
    }
    no;
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
