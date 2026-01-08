#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;

#define int long long


void solve(int test) {
    int w, h, a, b;
    cin >> w >> h >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dis = x1 - x2;
    int dis1 = y1 - y2;

    if((dis%a==0 and dis!=0) or (dis1%b==0 and dis1!=0)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
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
