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
    ll n;
    cin>>n;
    n--;//because first a 0 ta bad dite hobe
    // 5 base karon 0,2,4,6,8 ai koyta number dia e amader number gula build hobe
    // amra 0,1,2,3,4 ai 5 ta nia kaj korbo
    vector<ll> v;
    while (1){
        v.push_back(n % 5);
        if(n/5==0){
            break;
        }
        n /= 5;
    }
    ll x = 1;
    ll num = 0;
    for (int i = 0; i<v.size();i++){
        if(v[i]!=0){
            num += (x * v[i]);
        }
        x *= 10;
    }
    cout << num * 2 << "\n";
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
