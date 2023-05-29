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
        bool f = true;
        int c = 0;
        int x = s.size();
        for(int i=0;i<s.size();i++)
        {
            //cout<<s[i]<<"\n";
            if(i==0 and x!=1)
            {
            if((s[i]=='Y') )
            {
                c=1;
                
            }
            else if((s[i]=='e' ) )
            {
                c = 2;
            }
            else if(s[i]=='s' )
            {
                c = 0;
            }
            else
            {

            }
            }
            else if(x==1)
            {
            if((s[i]=='Y') )
            {
                c=1;
                
            }
            else if((s[i]=='e' ) )
            {
                c = 2;
            }
            else if(s[i]=='s' )
            {
                c = 0;
            }
            else
            {
              f = false;
            }
            }
           else if((s[i]=='Y' and c==0) )
            {
                c=1;
                
            }
            else if((s[i]=='e' and c==1) )
            {
                c = 2;
            }
            else if((s[i]=='s' and c==2) )
            {
                c = 0;
            }
            else
            {//dbg(3);
                f = false;
            }
        }
        if(f)
        {
            prints("YES");
        }
        else
        {
            prints("NO");
        }
    }
  return 0;
 }