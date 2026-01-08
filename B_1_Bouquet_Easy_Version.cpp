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
#define mod 1000000007
#define int long long

void solve(int test)
{
    int n, k;
    cin >> n >> k;
    int a[n];
    cin(a, n);
    sort(a, a + n);
    int pfx[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        pfx[i] = pfx[i - 1] + a[i - 1];
    }
    int i = 1;
    int j = 2;
    int ans = 0;
    while (i <= n and j <= n)
    {
        if (i == j)
        {
            j++;
            continue;
        }
        int sum = pfx[j] - pfx[i - 1];
        if (a[j - 1] - a[i - 1] > 1)
        {
            i++;
        }
        else
        {
            if (sum > k)
            {
                i++;
            }
            else
            {
                ans = max(ans, sum);
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, a[i]);
    }
    cout << ans << "\n";
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
