#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define int long long
#define mod 1000000007

void solve(int test)
{
    int n;
    cin >> n;
    int a[n + 1];
    cin(a, n);
    a[n] = a[0];
    int cnt = 0, run = 100;
    while (run--)
    {
        {
            int t = a[0] - a[1];
            if (t)
            {
                int x = t / 2;
                a[0] -= x * 2;
                a[1] += x;
                cnt += x;
            }
            a[n] = a[0];
        }
        for (int i = 1; i < n; i++)
        {
            int t = a[i] - a[i - 1];
            if (t)
            {
                int x = t / 2;
                a[i] -= x * 2;
                a[i + 1] += x;
                cnt += x;
            }
        }
        // dbg(a[n]);
        a[0] = a[n];
    }
    for (int i = 0; i + 1 < n; i++)
        if (a[i] != a[i + 1])
        {
            cnt = -1;
            break;
        }
    cout << cnt << '\n';
}
int32_t main()
{
    Muku28();
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        solve(i);
    }
    return 0;
}
