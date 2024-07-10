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
    ll n,c,d;
    cin>>n>>c>>d;
    ll x = n * n;
    ll a[x];
    cin(a,x);
    sort(a, a + x);
    map<int, int> mp;
    for (int i = 0; i < x;i++){
        mp[a[i]]++;
    }
    bool f = true;
    int p = a[0];
    int pp;
    for (int i = 0; i < n;i++){
        if(mp[p]==0){
            f = false;
            break;
        }
        if(mp[p]>0){
            mp[p]--;
            pp = p + d;
            for (int j = 1; j < n;j++){
                 if(mp[pp]==0){
                    f = false;
                    break;
                 }
                 if(mp[pp]>0){
                    mp[pp]--;
                    pp += d;
                 }
            }
            p += c;
        }
       
    }
    if(f){
        yes;
    }
    else{
        no;
    }
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
