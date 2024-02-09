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
int isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//Muku28
int Rehan()
{
    int n;
    cin>>n;
    string s;
    cin >> s;
    int one = 0;
    int zero = 0;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    int dif = 0;
    int j = n - 1;
    for (int i = 0; i < n / 2;i++)
    {
        if(s[i]!=s[j])
        {
            dif += 1;
        }
        j--;
    }
    string ans;
    for (int i = 0; i <= n;i++)
    {
        
        
        if(dif==i)
        {
            ans += '1';
        }
        else if(dif<i and ((i-dif)%2==0 or n%2!=0) and (i-dif)<=(n-dif*2))
        {
             ans += '1';
        }
        else
        {
              ans += '0';
        }
    }
        cout << ans << "\n";
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