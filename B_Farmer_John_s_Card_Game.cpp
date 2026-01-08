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

void solve(int test) {
    int n,m;
    cin >> n >> m;
    map<int, int> mp;

    for (int i = 1; i <= n;i++){
        for (int j = 0; j < m;j++){
            int a;
            cin >> a;
            mp[a] = i;
        }
    }

    vector<int> ans;

    for (int i = 0; i < n * m;i++){
        ans.push_back(mp[i]);
    }

    map<int, int> check;
    vector<int> v;
    for (int i = 0; i < n;i++){
        if(check[ans[i]]!=0){
            cout << -1 << "\n";
            return;
        }
        v.push_back(ans[i]);
        check[ans[i]]++;
    }

    int x = 0;
    for (int i = 0; i < n * m;i++){
        if(v[x]!=ans[i]){
            cout << -1 << "\n";
            return;
        }
        x++;
        if(x==n){
            x = 0;
        }
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
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
