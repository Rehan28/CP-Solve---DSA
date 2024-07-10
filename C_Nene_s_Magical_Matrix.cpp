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
    int n;
    cin>>n;
    vector<int> ans[2*n+5];
    ll sum = 1;
    int p = 0;
    for (int i = n; i > 0;i--){
        int type = 2;
        int col = i;
        ans[p].push_back(type);
        ans[p].push_back(col);
        for (int j = 1; j <= n;j++){
            ans[p].push_back(j);
        }
        p++;
        type = 1;
        int row = i;
        ans[p].push_back(type);
        ans[p].push_back(row);
        for (int j = 1; j <= n;j++){
            ans[p].push_back(j);
        }
        p++;
    }

    for (int i = 2; i <= n;i++){
        int x = i + i - 1;
        x *= i;
        sum += x;
    }

    cout << sum << " " << 2 * n << "\n";
    for (int i = 0; i < 2 * n;i++){
        for(auto it : ans[i]){
            cout << it << " ";
        }
        cout << "\n";
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
