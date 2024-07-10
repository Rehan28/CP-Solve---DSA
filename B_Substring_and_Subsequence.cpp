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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int ans = INT_MAX;
    for (int i = 0;i<m;i++){
        int x = i;
        for (int j = 0; j < n;j++){
            if(b[x]==a[j]){
                x++;
            }
        }
        x = (x-i);
        x = n + m - x;
        ans = min(x, ans);
    }
    cout << ans << "\n";
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
