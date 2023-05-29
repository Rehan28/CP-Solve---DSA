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
        int c = 0;
        int n = s.size() - 1;
        int pos0 = -1;
        int req1 = -1;
        int req2 = -1;
        bool f = false;
        for(int i=n;i>-1;i--)
        {
            if(s[i]=='0' and f==false)
            {
                pos0 = i;
                f = true;
                continue;
            }
            if(f and (s[i]=='0' or s[i]=='5'))
            {
                req1 = pos0 - i - 1;
                req1 += (n-pos0);
                break;
            }
        }
        //printi(req1);
       bool b = false;
        pos0 = -1;
        for(int i=n;i>-1;i--)
        {
            if(s[i]=='5' and b == false)
            {
                pos0 = i;
                b = true;
                continue;
            }
            if(b and (s[i]=='7' or s[i]=='2'))
            {
                req2 = pos0 - i - 1;
                req2 += (n-pos0);
                break;
            }
        }
        //printi(req2);
       if(req1==-1)
       {
        printi(req2);
       }
       else if(req2==-1)
       {
        printi(req1);
       }
       else
       {
        printi(min(req1,req2));
       }
       
    }
  return 0;
 }