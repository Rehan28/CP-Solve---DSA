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
    string s[3];
    for (int i = 0; i < 3;i++)
    {
        cin >> s[i];
    }
        for (int i = 0; i < 3; i++)
        {
            
                if (s[i][0] == s[i][1] and s[i][1] == s[i][2] and s[i][0]!='.')
                {
                    cout << s[i][1] << "\n";
                    return 0;
                }
                if(s[0][i]==s[1][i] and s[1][i]==s[2][i] and s[0][i]!='.')
                {
                    cout << s[0][i] << "\n";
                    return 0;
                }
        }
        if(s[0][0]==s[1][1] and s[1][1] == s[2][2] and s[0][0]!='.')
        {
                cout << s[0][0] << "\n";
                return 0;
        }
        else if(s[0][2]==s[1][1] and s[1][1] == s[2][0] and s[2][0]!='.')
        {
             cout << s[0][2] << "\n";
                return 0;
        }
        else
        {
                cout << "DRAW\n";
                return 0;
        }
    

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