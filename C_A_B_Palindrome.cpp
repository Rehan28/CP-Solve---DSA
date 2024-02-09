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
    int a;
    int b;
    cin >> a >> b;
    int n = a + b;
    string s;
    cin >> s;
    bool f = true;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='1')
        {
            b--;
        }
        else if(s[i]=='0')
        {
            a--;
        }
    }
    //dbg(a);
    for (int i = 0; i < n / 2; i++)
    {
        int x = n - i;
        x--;
        if (s[i] == '?' and s[x] == '?')
        {
            if (a > 1)
            {
                a -= 2;
                s[i] = '0';
                s[x] = '0';
                
            }
            else if(b>1)
            {
                b -= 2;
                s[i] = '1';
                s[x] = '1';
            }
        }
        else if (s[i] == '?')
        {
            if (s[x] == '1')
            {
                b--;
                s[i] = '1';
            }
            else
            {
                a--;
                s[i] = '0';
            }
        }
        else if (s[x] == '?')
        {
            if (s[i] == '1')
            {
                b--;
                s[x] = '1';
            }
            else
            {
                a--;
                s[x] = '0';
            }
        }
        else if ((s[i] == '1' and s[i] == s[x]))
        {
        }
        else if (s[i] == '0' and s[i] == s[x])
        {
        }
        else
        {
            f = false;
            break;
        }
    }
    if(n%2)
    {
        if(s[n/2]=='?')
        {
            if(a>0)
            {
                s[n/2] = '0';
                a--;
            }
            else if(b>0)
            {
                b--;
                s[n / 2] = '1';
            }
        }
       
    }
  
   // dbg(a);
    if(f and (a==0 and b==0))
    {
        cout << s << "\n";
    }
    else
    {
        cout << -1 << "\n";
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