#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
#define cin(a, n)               \
    for (int i = 0; i < n; i++){                           \
        cin >> a[i];            \
    }
#define nl "\n"
#define dbg(x) cout << #x << " = " << x << nl;
#define no cout << "NO" << nl;
#define yes cout << "YES" << nl;
#define mod 1000000007

void solve(int test)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int j = 0;
    char ans[n];
    for (int i = 0; i < n; i = i + 3)
    {
        ans[i] = s[j];
        j++;
    }
    for (int i = 1; i < n; i = i + 3)
    {
        ans[i] = s[j];
        j++;
    }
    for (int i = 2; i < n; i = i + 3)
    {
        ans[i] = s[j];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << "\n";
    for (int i = 0; i < n;i++){
        cout<<i<<"\n";
    }
}
int main()
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
