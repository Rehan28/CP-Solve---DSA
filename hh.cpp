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
    ll t;
    cin >> t;
    while (t--)
    {
        string s, p;
        cin >> s >> p;
        ll day = (s[0] - 48) * 10 + (s[1] - 48);
        ll month = (s[3] - 48) * 10 + (s[4] - 48);
        ll year = (s[6] - 48) * 1000 + (s[7] - 48) * 100 + (s[8] - 48) * 10 + (s[9] - 48);
        // cout << day << " " << month << " " << year << '\n';
        vector<string> vs(7);
        vs[0] = "Sun";
        vs[1] = "Mon";
        vs[2] = "Tue";
        vs[3] = "Wed";
        vs[4] = "Thu";
        vs[5] = "Fri";
        vs[6] = "Sat";
        vector<vector<ll>> v(5);
        for (ll i = 0; i < 5; i++)
        {
            for (ll j = 0; j < 7; j++)
            {
                v[i].pb(0);
            }
        }
        ll start = -1;
        for (ll i = 0; i < 7; i++)
        {
            ll k = i - 1;
            // cout << k << " ";
            for (ll j = 1; j <= day; j++)
            {
                k++;
                if (j == day && vs[k] == p)
                {
                    // cout << "Dhukche" << '\n';
                    start = i;
                    break;
                }
                if (k == 6)
                {
                    k = -1;
                }
            }
            if (start >= 0)
                break;
        }
        if (month == 1 or  month == 3 or month == 5 or month == 7 or  month == 8 or month == 10 or month == 12)
        {
            ll cnt = 1;
            for (ll i = 0; i < 5; i++)
            {
                for (ll j = start; j < 7; j++)
                {
                    v[i][j] = cnt;
                    cnt++;
                    if (cnt > 31)
                        break;
                }
                start = 0;
            }
            if (cnt <= 31)
            {
                for (ll i = 0; i < 7; i++)
                {
                    v[0][i] = cnt;
                    cnt++;
                    if (cnt > 31)
                        break;
                }
            }
        }
        else if (month == 4 or  month == 6 or month == 9 or month == 11)
        {
            ll cnt = 1;
            for (ll i = 0; i < 5; i++)
            {
                for (ll j = start; j < 7; j++)
                {
                    v[i][j] = cnt;
                    cnt++;
                    if (cnt > 30)
                        break;
                }
                start = 0;
            }
            if (cnt <= 30)
            {
                for (ll i = 0; i < 7; i++)
                {
                    v[0][i] = cnt;
                    cnt++;
                    if (cnt > 30)
                        break;
                }
            }
        }
        else
        {
            ll limit;
            if (((year % 4 == 0) && (year % 100 != 0)) or (year % 400 == 0))
                limit = 29;
            else
                limit = 28;
            ll cnt = 1;
            for (ll i = 0; i < 5; i++)
            {
                for (ll j = start; j < 7; j++)
                {
                    v[i][j] = cnt;
                    cnt++;
                    if (cnt > limit)
                        break;
                }
                start = 0;
            }
            if (cnt <= limit)
            {
                for (ll i = 0; i < 7; i++)
                {
                    v[0][i] = cnt;
                    cnt++;
                    if (cnt > limit)
                        break;
                }
            }
        }
        cout << "|---------------------------|" << '\n';
        cout << "|";
        for (ll i = 0; i < 7; i++)
        {
            cout << vs[i] << "|";
        }
        cout << '\n';
        cout << "|---------------------------|" << '\n';
        for (ll i = 0; i < 5; i++)
        {
            cout << "|";
            for (ll j = 0; j < 7; j++)
            {if (v[i][j] >= 10)
                    cout << " " << v[i][j] << "|";
                else if (v[i][j] > 0)
                    cout << "  " << v[i][j] << "|";
                else
                    cout << " - |";
            }
            cout << '\n';
            cout << "|---------------------------|" << '\n';
        }
        //cout << '\n';
    }
 return 0;
}