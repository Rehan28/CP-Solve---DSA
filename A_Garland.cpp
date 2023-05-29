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
      string s;
      cin>>s;
      bool f = false;
      set<int> st;
      for(int i=0;i<s.size();i++)
      {
        st.insert(s[i]);
      }
      if(st.size()==1)
      {
        printi(-1);
      }
      else if(st.size()==2)
      {
        sort(s.begin(),s.end());
        int c = 1;
        for(int i=0;i<4;i++)
        {
            if(s[i]!=s[i+1])
            {
                break;
            }
            c++;
        }
        if(c==3 or c==1)
        {
            printi(6);
        }
        else
        {
            printi(4);
        }
      }
      else
      {
        printi(4);
      }
    }
  return 0;
 }