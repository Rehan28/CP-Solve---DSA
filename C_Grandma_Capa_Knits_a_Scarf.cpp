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
    int c = INT_MAX;
    bool ff = false;
    for (char i = 'a'; i <= 'z';i++)
    {
        int x = n - 1;
        int j = 0;
        int ans = 0;
        //cout << i << "\n";
        bool f = true;
        int xx = 20;
        while (j<x)
        {
            //cout << s[j] << " " << s[x] << "\n";
            //xx--;
            if(s[j]!=s[x] and s[j]==i)
            {
                j++;
                ans++;
            }
            else if(s[j]!=s[x] and s[x]==i)
            {
                x--;
                ans++;
            }
            else if(s[j]==s[x])
            {
                j++;
                x--;
            }
            else if(s[j]!=s[x])
            {
                f = false;
                break;
            }
            //  cout << s[j] << " " << s[x] << "\n";
            //  cout << j << " " << x << "\n";
            
        }
        if(f)
        {
            c = min(ans, c);
            ff = true;
        }    
        
    }
    if(ff)
    {
        cout << c << "\n";
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