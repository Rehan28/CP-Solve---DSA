#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=1;i<=n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n, k;
    cin>>n>>k;
    int a[n+1];
    cin(a,n);

    vector<int> v;
    for(int i = 1; i <= n; i++) {
        if(a[i]!=i){
            v.push_back(i);
        }
    }

    int s = v.size();
    int c = 0;
    for (int i = 0; i < s-1;i++){
        int gap = v[i+1] - v[i];

        dbg(gap);
        if (gap != k){
            c++;
        }
    }
    dbg(c);
    if(c==0){
        cout << "0\n";
    }
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
