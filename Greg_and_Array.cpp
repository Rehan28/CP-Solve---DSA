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
    int n, m, k;
    cin>>n>>m>>k;
    int a[n];
    cin(a,n);

    int l[m+1], r[m+1], d[m+1];
    int x = 1;
    for(int i=0;i<m;i++){
        int ll, rr, dd;
        cin >> ll >> rr >> dd;
        l[x] = ll;
        r[x] = rr;
        d[x] = dd;
        x++;
    }

    int b[m + 1] = {0};

    while(k--){
        int l, r;
        cin >> l >> r;
        b[l]++;
        b[r + 1]--;
    }

    for (int i = 1; i <= m;i++){
        b[i] += b[i - 1];
    }

    int c[n + 1] = {0};
    for (int i = 1; i <= m;i++){
        c[l[i]] += b[i] * d[i];
        c[r[i]+1] -= b[i] * d[i];
    }

    for (int i = 1; i <= n;i++){
        c[i] += c[i - 1];
        //dbg(c[i]);
    }

    for (int i = 1; i <= n;i++){
        cout << c[i] + a[i-1] << " ";
    }
    cout<<nl;
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
