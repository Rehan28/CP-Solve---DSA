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
ll mod = 10e9 + 7;
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
        string ss = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
        int x = 32*32;
        int y = 0;
        string s1[x];
         for (int i = 0; i < 32; i++) 
         {
            string ss2;
        for (int j = i; j < 32; j++) 
        {
            ss2 += ss[j];
            s1[y] += ss2;  
            //cout<<s1[y]<<"\n";
            y++;
        }
        }
        bool f = false;
       // printi(y);
        for(int i=0;i<y;i++)
        {
         if(s1[i]==s)
         {
            f = true;
            break;
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