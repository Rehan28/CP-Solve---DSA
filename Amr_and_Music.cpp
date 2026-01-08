#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin >> n >> k;
    int a[n];
    cin(a,n);
    int b[n];
    for (int i = 0; i < n;i++){
        b[i] = a[i];
    }
    sort(a, a + n);

    int c = 0;
    map<int, int> count;
    map<pair<int,int>, int> mp;
    for (int i = 0; i < n;i++){
        k -= a[i];
        if(k<0){
            break;
        }
        count[a[i]]++;
        mp[{a[i], count[a[i]]}] = 1;
        c++;
    }

    count.clear();

    cout << c << "\n";

    for (int i = 0; i < n;i++){
        count[b[i]]++;
        if(mp[{b[i],count[b[i]]}]==1){
            cout << i + 1 << " ";
        }
    }

    cout << "\n";
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
