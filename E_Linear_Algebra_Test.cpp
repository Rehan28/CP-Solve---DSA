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
#define int long long

void solve(int test) {
    int n;
    cin>>n;
    vector<int> v;
    map<int, int> row;
    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        v.push_back(a);
        row[b]++;
    }
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += row[v[i]];
    }
    cout << sum << "\n";
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
