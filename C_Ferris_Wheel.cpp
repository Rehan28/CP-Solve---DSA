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
    int b[m];
    cin(b, m);

    sort(a, a + n);
    multiset<int> v;
    for (int i = 0; i < n;i++){
        v.insert(a[i]);
    }

    for (int i = 0; i < m;i++){
        auto it = upper_bound(v.begin(),v.end(), b[i]);
        it--;
        int x = *it;
        //dbg(x);
        if(x<=b[i]){
            cout << x << "\n";
            v.erase(it);
        }
        else{
            cout << -1 << "\n";
        }
    }
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
