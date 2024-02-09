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
int Rehan()
{
    int n;
    cin>>n;
    string s;
    cin >> s;
    string s1 = "01";
    int k = n;
    vector<int> v;
    bool f = true;
    int c = 0;
    for (int i = 0; i < k;i++)
    {
        int x = i + 1;
        int point = k - x + 1;
        point--;
        if(s[i]==s[point] and s[i]=='1')
        {
            v.push_back(i);
            s.insert(i, s1);
            k = k + 2;
            c++;
        }
        else if(s[i]==s[point] and s[i]=='0')
        {
            v.push_back(point + 1);
            s.insert(point+1, s1);
            k = k + 2;
            c++;
        }
        //cout << s << " " << c << "\n";
        if(c>300)
        {
            f = false;
            break;
        }
    }
    if(f)
    {
        cout << c << "\n";
        for (int i = 0; i < v.size();i++)
        {
            cout << v[i] << " ";
        }
        nl;
    }
    else
    {
        cout << -1 << "\n";
    }

    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }