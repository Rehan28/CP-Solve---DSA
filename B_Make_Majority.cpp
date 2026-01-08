#include <bits/stdc++.h>
using namespace std;

void Muku28() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO" << nl;
#define yes cout << "YES" << nl;
#define mod 1000000007
#define ll unsigned long long

void solve(int test) {
    ll n;
    cin >> n;
    vector<ll> sequence;
    ll current = 0;

    for (ll i = 0; i < 64; ++i) {
        ll next = (current | (1ULL << i));
        if (next <= n) {
            sequence.push_back(next);
            current = next;
        } else {
            break;
        }
    }

    cout << sequence.size() << "\n";
    for (ll num : sequence) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    Muku28();
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
