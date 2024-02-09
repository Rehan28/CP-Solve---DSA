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
    int x = 1;
    string ss = s;
    for (int i = 0; i < n;i++)
    {
        if(x==1)
        {
            for (int j = i; j < n;j++)
            {
                if(s[i]==s[j] and ss[j]!='0')
                {
                   
                    ss[j] = '1';
                    //cout << s[j];
                }
                else if(s[i]==s[j])
                {
                    no;
                    return 0;
                }
            }
            x = 0;
        }
        else
        {
            for (int j = i; j < n;j++)
            {
                if(s[i]==s[j] and ss[j]!='1')
                {
                    ss[j] = '0';
                }
                else if(s[i]==s[j])
                {
                    no;
                    return 0;
                }
            }
            x = 1;
        }
    }
    //cout << s[1] << "\n";
    for (int i = 0; i < n-1;i++)
    {
        if(ss[i]==ss[i+1])
        {
            no;
            return 0;
        }
    }
    yes;
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