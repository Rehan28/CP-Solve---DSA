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
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> a;
    a.push_back(0);
    for (int i = 1; i <= k;i++){
        ll y;
        cin >> y;
        a.push_back(y);
    }

    vector<ll> b;
    b.push_back(0);
    for (int i = 1; i <= k;i++){
        ll y;
        cin >> y;
        b.push_back(y);
    }

    // long double c[k + 2];
    // for (int i = 1; i <= k;i++){
    //     c[i] = (long double)dis / (long double)time;
    // }
    while (q--){
        ll point;
        cin >> point;
        auto it = upper_bound(a.begin(), a.end(), point);
        int pos = it - a.begin();
        
        ll dis = point - a[pos - 1];
        ll time = b[pos - 1];
        if(pos==k+1){
            pos--;
        }
        // dbg(point);
        // dbg(time);
        long double dis1 = a[pos] - a[pos - 1];
        long double time1= b[pos] - b[pos - 1];
        long double now = ((long double)dis * time1)/dis1;
        time += now;
        cout << time << " ";
    }
    cout << "\n";
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
