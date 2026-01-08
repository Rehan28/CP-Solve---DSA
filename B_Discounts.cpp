#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, m;
    cin >> n >> m;
    int a[n];
    cin(a,n);

    vector<int> v;
    int ans = 0;
    for (int i = 0; i < n;i++){
        v.push_back(a[i]);
        ans += a[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    vector<int> b;
    for (int i = 0; i < m;i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());


    int i = b[0];
    int j = 1;
   
    for (; i <= n;){
        ans -= v[i-1];
        
        if(j==m){
            break;
        }
        i += b[j];

        j++;
    }
    cout << ans << "\n";
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
