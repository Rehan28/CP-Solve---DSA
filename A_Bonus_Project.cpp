#include <bits/stdc++.h>
using namespace std;
void Muku28()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
#define cin(a, n)               \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }
#define nl "\n"
#define dbg(x) cout << #x << " = " << x << nl;
#define no cout << "NO" << nl;
#define yes cout << "YES" << nl;
#define ll long long
#define mod 1000000007
int32_t main()
{
    Muku28();
    ll n, k, total = 0;
    cin >> n >> k;
    vector<ll> a(n), b(n), ans(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        total += (a[i] / b[i]);
    }
    if (total >= k)
    {
        for (ll i = 0; i < n; i++)
        {
            ll x = total - (a[i] / b[i]);
            ll korbe = max(0LL, k - x);
            ans[i] = korbe;
            total -= (a[i] / b[i]);
            k -= korbe;
        }
    }
    for (auto it : ans)
        cout << it << " ";
    cout << '\n';
    return 0;
}
