#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define Wrong                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    Wrong;
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v[i].pb(x);
        }
    }
    vector<ll> pos;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (v[j][i] == 1)
            {
                pos.pb(j + 1);
                break;
            }
        }
    }
    vector<pair<ll,ll>> vp;
    for (ll i = 0; i < m; i++)
    {
        vp.pb({pos[i], i});
    }
    sort(vp.begin(), vp.end());
    ll ans = LLONG_MAX;
    for (ll i = 1; i <= n; i++)
    {
        auto it = upper_bound(vp.begin(), vp.end(),make_pair(i,LLONG_MAX));
        ll xx;
        if(it!=vp.begin())
        {
             xx = (it - vp.begin()) - 1;
        }
        else
        {
             xx = (it - vp.begin());
        }
        //cout<<" xx : "<<xx<<"\n";
        ll p = vp[xx].second;
       // cout<<" p : "<<p<<"\n";
        ll r = i;
        ll cnt = 0;
        for (ll j = p - 1; j >= 0; j--)
        {
            if (pos[j] - r > 1)
            {
                cnt += (pos[j] - r - 1);
                r++;
            }
            else if (r - pos[j] > 1)
            {
                cnt += (r - pos[j] - 1);
                r--;
            }
            else
                r = pos[j];
            // cout << cnt << '\n';1
        }
        r = i;
        for (ll j = p; j < m; j++)
        {
            if (pos[j] - r > 1)
            {
                cnt += (pos[j] - r - 1);
                r++;
            }
            else if (r - pos[j] > 1)
            {
                cnt += (r - pos[j] - 1);
                r--;
            }
            else
                r = pos[j];
        }
        //cout << i << " " << cnt << '\n';
        ans = min(ans, max((ll)0,cnt));
    }
    cout << ans << '\n';
    return 0;
}



