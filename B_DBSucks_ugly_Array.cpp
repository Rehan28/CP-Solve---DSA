#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007
const int N = 1e5 + 9;
int spf[N];

void build(){
    for (int i = 2; i <N ;i++){
        spf[i] = i;
    }
    for (int i = 2; i < N;i++){
        for (int j = i; j <N ;j+=i){
            spf[j] = min(spf[j], i);
        }
    }
}

void solve(int test) {
    int n,k;
    cin >> n >> k;
    int a[n];
    cin(a,n);
    set<int> st;
    for (int i = 0; i < n;i++){
        if(a[i]==1){
            continue;
        }
        while(a[i]>1){
            st.insert(spf[a[i]]);
            a[i] /= spf[a[i]];
        }
    }
    // dbg(st.size());
    int ans = k;
    for (int i = 2; i <= k;i++){
        int p = i;
        while(p>1){
            int x = spf[p];
            if(st.find(x)!=st.end()){
                ans--;
                break;
            }
            p /= x;
        }
    }
    cout << ans << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    build();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
