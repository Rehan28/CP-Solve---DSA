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
        string s,s1,s2;
        cin>>s;
        int g = 0;
       int j = n-1;
       bool f = true;
        if(s[0]==s[n-1])
        {
            g = 1;   
            int gg = 0;
            for(int i=0;i<n/2;i++)
            {
                if(g==1 and s[i]!=s[j])
                {
                    
                    g = 0;
                }
                if(g==0 and s[i]==s[j])
                {
                    gg=1;
                }
                if(gg==1 and s[i]!=s[j])
                {
                    f = false;
                    break;
                }
                j--;
            }
        }
        else
        {
            g = 1;
            int gg = 0;
            for(int i=0;i<n/2;i++)
            {
                 if(g==1 and s[i]==s[j])
                {
                    gg=1;
                    g =0;
                }
                if(gg==1 and s[i]!=s[j])
                {
                    f = false;
                    break;
                }
                j--;
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