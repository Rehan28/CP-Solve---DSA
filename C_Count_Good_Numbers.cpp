#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

int f(int a,int b,int ans,int v){
    int x = a % v;
    int y = a - x;
    int z = b - y;
    ans -= z / v;
    return ans;
}

int ff(int a,int b,int ans,int v){
    int x = a % v;
    int y = a - x;
    int z = b - y;
    ans += z / v;
    return ans;
}


void solve(int test) {
    int a, b;
    cin >> a >> b;

    int ans = b - a + 1;
    a--;
    ans = f(a, b, ans, 2);
    ans = f(a, b, ans, 3);
    ans = f(a, b, ans, 5);
    ans = f(a, b, ans, 7);

    ans = ff(a, b, ans, 6);
    ans = ff(a, b, ans, 10);
    ans = ff(a, b, ans, 14);

    ans = ff(a, b, ans, 15);
    ans = ff(a, b, ans, 21);
    ans = ff(a, b, ans, 35);

    ans = f(a, b, ans, 30);
    ans = f(a, b, ans, 42);
    ans = f(a, b, ans, 70);
    ans = f(a, b, ans, 105);

    ans = ff(a, b, ans, 210);


    cout<<ans<<nl;
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
