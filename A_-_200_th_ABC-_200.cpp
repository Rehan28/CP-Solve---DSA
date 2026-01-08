
#include <bits/stdc++.h>
// Muku28
using namespace std;
typedef long long ll;
void Muku28()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void printi(int x) { cout << x << "\n"; }
void printl(ll x) { cout << x << "\n"; }
void prints(string x) { cout << x << "\n"; }
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
    {
        cout << a[i] << ",";
    }
}
void dbg(int x) { cout << "x is " << x << endl; }
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
#define cinv(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int a;                  \
        cin >> a;               \
        v.push_back(a);         \
    }
#define cin(a, n)               \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(v) v.begin(), v.end()
#define nl cout << "\n";
// Muku28
int main()
{
    Muku28();
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 200 == 0)
        {
            n = n / 200;
        }
        else
        {
            // ll sum = 0;
            string x = to_string(n);
            x += '2';
            x += '0';
            x += '0';
            stringstream geek(x);
            ll sum = 0;
            geek >> sum;
            n = sum;
        }

        // cout<<n<<"\n";
    }
    cout << n << "\n";
    return 0;
}