
#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

const int N = 1e7 + 9;
bool is_prime[N];

void sieve(){
    for(int i=2;i<N;i++){
        is_prime[i] = true;
    }
    for(int i=2;i*i<N;i++){
        if(is_prime[i]){
            for(int j=i*i;j<N;j+=i){
                is_prime[j] = false;
            }
        }
    }
}

void solve(int test) {
    sieve();
    int n, m;
    cin>>n>>m;
    int a[n];
    cin(a,n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x = sqrt(a[i]);
        if(is_prime[x] and x*x == a[i]){
            mp[i+1] = mp[i] + 1;
        }
        else{
            mp[i + 1] = mp[i];
        }
    }
    for(int i=0;i<m;i++){
        int l, r;
        cin>>l>>r;
        cout<<mp[r] - mp[l-1]<<" ";
    }
    cout<<nl;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
