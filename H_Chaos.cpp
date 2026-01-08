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


const int N = 1e5 + 9;
int t[N * 4];

void update(int n, int b, int e, int i, int x) { 
    if (i > e or i < b) {
        return;
    }
    if (b == e and b == i) { 
        t[n] += x; 
        return;
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[n] = t[l] + t[r]; 
}

int query(int n, int b, int e, int i, int j) {
    if (b > j or e < i) {
        return 0;
    }
    if (b >= i and e <= j) {
        return t[n];
    }
    int l = 2 * n;
    int r = 2 * n + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    vector<int> b;
    for (int i = 0; i < n;i++){
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    for (auto x : a) {
        x = lower_bound(b.begin(), b.end(), x) - b.begin() + 1;
    }

    int inv = 0;
    for (int i = n - 1; i >= 0; --i) {
        inv += query(1, 1, n, 1, a[i] - 1);
        update(1, 1, n, a[i], 1);
    }
    cout << inv<< "\n";
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


