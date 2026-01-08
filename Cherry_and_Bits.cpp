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
    string s[n];
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }

    int q;
    cin >> q;

    int a[n + 3][m + 3] = {0};
    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        a[x1][y1]++;
        a[x2+1][y1]--;//start column ar end point

        a[x1][y2 + 1]--;
        a[x2+1][y2 + 1]++;
        
    }

    for (int j = 1; j <= m;j++){
        a[0][j] = 0;
        for (int i = 1; i <= n;i++){
            a[i][j] += a[i - 1][j];
        }
    }

    for (int i = 1; i <= n;i++){
        a[i][0] = 0;
        for (int j = 1; j <= m;j++){
             a[i][j] += a[i][j-1];
             //dbg(a[i][j]);
        }
    }

    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            if(s[i-1][j-1]=='0'){
                if(a[i][j]%2==0){
                    cout << 0;
                }
                else{
                    cout << 1;
                }
             }
             else{
                if(a[i][j]%2==0){
                    cout <<1;
                }
                else{
                    cout << 0;
                }
             }
        }
        cout << "\n";
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
