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
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n / 2;i++)
        {
            int x = (n - 1) - i;
            if(s[i]!=s[x])
            { 
                
                c++;
            }
        }
        int zero = 0;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='0')
            {
                
                zero++;
            }
        }
            if (n % 2)
            {
                if (s[((n / 2))] == '0')
                {
                    c++;
                }
            }
           
            int ali = 0;
            int bob = 0;
            int turn = 0;
            int p = 1;
            while (1)
            {
                if (turn == 0)
                {
                    if (p == 1)
                    {
                        if (c > 0)
                        {
                            c--;
                            p = 1;
                        }
                        else
                        {
                            p = 0;
                        }
                        ali++;
                        zero--;
                    }
                    else
                    {
                        p = 1;
                    }
                    turn = 1;
                }
                else
                {
                    if (p == 1)
                    {
                        if (c > 0)
                        {
                            c--;
                            p = 1;
                        }
                        else
                        {
                            p = 0;
                        }
                        bob++;
                        // p = 0;
                        zero--;
                    }
                    else
                    {
                        p = 1;
                    }
                    turn = 0;
                }
                if (zero == 0)
                {
                    break;
                }
        }
        if(bob>ali)
        {
           prints("ALICE");
        }
        else if(bob==ali)
        {
           prints("DRAW");
        }
        else
        {
           prints("BOB");
        }
        
    }
  return 0;
 }