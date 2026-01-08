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
#define int long long

void solve(int test)
{
    int n, m;
    cin >> n >> m;
    if ((n % 2 and m % 2) or (n % 2 and n == 1) or (m % 2 and m == 1))
        cout << "-1" << nl;
    else
    {
        string s = "";
        if (n % 2)
        {
            for (int i = 0; i < m / 2; i++)
                s += 'b';
            for (int i = 0; i < n / 2; i++)
                s += 'a';
            s += 'a';
            string rev = s;
            s.pop_back();
            reverse(rev.begin(), rev.end());
            s += rev;
            cout << s << nl;
            int x = m / 2;
            int y = x + n;
            swap(s[x], s[x - 1]);
            swap(s[y], s[y - 1]);
            cout << s << nl;
        }
        else if (m % 2)
        {
            for (int i = 0; i < n / 2; i++)
            {
                s += 'a';
            }
            for (int i = 0; i < m / 2; i++)
            {
                s += 'b';
            }
            if (m % 2)
            {
                s += 'b';
            }
            string rev = s;
            s.pop_back();
            reverse(rev.begin(), rev.end());
            s += rev;
            cout << s << nl;

            int x = n / 2;
            int y = x + m;
            swap(s[x], s[x - 1]);
            swap(s[y], s[y - 1]);

            cout << s << nl;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                s += 'a';
            }
            for (int i = 0; i < m / 2; i++)
            {
                s += 'b';
            }
            string rev = s;
            reverse(rev.begin(), rev.end());
            s += rev;
            cout << s << nl;

            int x = n / 2;
            int y = x + m;
            swap(s[x], s[x - 1]);
            swap(s[y], s[y - 1]);

            cout << s << nl;
        }
    }
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
