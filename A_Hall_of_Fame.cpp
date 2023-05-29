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
        int r = -1;
        int l = -1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                r = i;
                break;
            }
           
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                l = i;
            }
           
        }
      map<int,int> a;
        if(r>-1 and l>-1)
        {
           if(r>l)
           {
              for(int i=0;i<s.size();i++)
                {
                    if((s[i]=='L' and s[i+1]=='R') or (s[i]=='R' and s[i+1]=='L'))
                    {
                        cout<<i+1<<"\n";
                        break;
                    }
                }
           }
           else
           {
            printi(0);
           }
        }
        else
        {
            printi(-1);
        }
    }
  return 0;
 }