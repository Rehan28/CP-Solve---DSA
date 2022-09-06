#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(v) v.begin(),v.end()
#define nl cout<<"\n";
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
        int x ;
        bool co = 0;
        int a;int d;
        for(int i=0;i<(s.size()-1);i++)
        {
           a = (s[i] - '0')+(s[i+1] - '0');
           if(a>9)
           {
            x = i;
            d = a;
            co = 1;
            //break;
           }
        }
        if(co)
        {
            char fi = (d/10) + '0';
            if(a/10==0)
            {
                fi = 1 + '0';
            }
            char se = (d%10) + '0';
            //cout<<d;
            s[x] = fi;
            s[x+1] = se;
            for(int i=0;i<s.size();i++)
              {
               cout<<s[i];
              }
        }
        else
        {
             a = (s[0] - '0')+(s[1] - '0');
             char fi = a + '0';
             s[1] = fi;
             for(int i=1;i<s.size();i++)
              {
               cout<<s[i];
              }
        }
        cout<<"\n";
    }
  return 0;
 }