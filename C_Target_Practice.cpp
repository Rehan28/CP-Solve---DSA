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
    string s[10];
    for (int i = 0; i < 10;i++)
    {
        cin >> s[i];
    }
    int point = 0;
    for (int i = 0; i < 10;i++)
    {
        for (int j = 0; j < 10;j++)
        {
           if(s[i][j]=='X')
           {
               int x = i + 1;
               if(x>5)
               {
                   x = 11 - x;
               }
               int y = j + 1;
               if(y>5)
               {
                   y = 11 - y;
               }
               point += min(x, y);
            //    cout << min(x, y) << "\n";
            //    dbg(y);
           }
        }
    }
    cout << point << "\n";
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