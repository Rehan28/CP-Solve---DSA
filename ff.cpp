
#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//Muku28
void Rehan()
{
    string s, s1;
    cin >> s >> s1;
    reverse(s.begin(),s.end());
    reverse(s1.begin(),s1.end());

    //cout << s << " " << s1 << "\n";
    int j = 0;
    string ans;
    bool f = true;
    bool ff = false;
    for (int i = 0; i < s1.size();i++)
    {
        string ss;
        //cout << i << " " << j << "\n";
        if(s[j]<=s1[i])
        {
            ans += ('0' + (s1[i] - s[j]));
            //cout << ans << "\n";
        }
        else
        {
            if(i+1==s1.size())
            {
                f = false;
                break;
            }
            ss += s1[i+1];
            ss += s1[i];
            i++;
            int x = stoi(ss);
            int y = s[j] - '0';
            x = x - y;
            if(x < 10 and x>0)
            {
                ans += to_string(x);
            }
            else
            {
                f = false;
                break;
            }
        }
        j++;
        if(j==(s.size()))
        {
            ff = true;
            j = i;
            break;
        }
    }
        for (int i = j+1; i < s1.size();i++)
        {
            ans += s1[i];
        }
        reverse(ans.begin(), ans.end());
        int x = stoi(ans);
        ans = to_string(x);
        if (f and ff)
        {
            cout << ans << "\n";
        }
        else
        {
            printi(-1);
        }

}
//--------------28--------------//
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        Rehan();
    }
  return 0;
 }
