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
        cin>>s;
        string b;
        cin>>b;
        int legal[n] = {0};
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
            if(one==zero)
            {
                legal[i] = 1;
            }
        }
        int x = 1;
        bool f = true;
        for (int i = n - 1; i > -1;i--)
        {
            if(s[i]!=b[i] and x==1)
            {
                x = 0;
                if(legal[i]==0)
                {
                    f = false;
                    break;
                }
            }
            else if(s[i]==b[i] and x == 0)
            {
                x = 1;
                if(legal[i]==0)
                {
                    f = false;
                    break;
                }
            }
        }
        if(f)
        {
            yes;
        }
        else
        {
            no;
        }
    }
  return 0;
 }