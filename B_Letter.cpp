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
    string s,s1;
    getline(cin, s);
    getline(cin, s1);
    //cout<<s[8]<<"\n";
    bool f = true;
    int a[2000] = {0};
    for(int i=0;i<s1.size();i++)
    {
     if(s1[i]!=' ')
     {
       bool ff = true;
      for(int j=0;j<s.size();j++)
      {
        if(a[j]==0 and s[j]==s1[i])
        {
          a[j]=1;
          
          ff = false;
          break;
        }
      }
      if(ff)
      {
        //dbg(i);
        f = false;
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

  return 0;
 }