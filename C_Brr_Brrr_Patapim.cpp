#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;

    map<int,int> mp;
    map<int, int> val;

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            int x;
            cin >> x;
            mp[i + j] = x;
            val[x]++;
        }
    }

    for (int i = 1; i <= 2*n;i++){
        if(val[i]==0){
            cout << i << " ";
        }
    }
    for (int i = 2; i <= 2*n;i++){
        cout<<mp[i]<<" ";
    }
    cout << "\n";
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
