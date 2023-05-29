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
        string s,s1;
        cin>>s>>s1;
        int x = s.size();
        int y = s1.size();
        //cout<<s1[y-1];
        if(s[x-1]<s1[y-1])
        {
            prints(">");
        }
        else if(s[x-1]>s1[y-1])
        {
            prints("<");
        }
        else
        {
            if(s[x-1]=='M')
            {
                prints("=");
            }
            else if(s[x-1]=='S')
            {
                if(x>y)
                {
                    prints("<");
                }
                else if(x==y)
                {
                    prints("=");
                }
                else
                {
                    prints(">");
                }
            }
            else
            {
                if(x>y)
                {
                    prints(">");
                }
                else if(x==y)
                {
                    prints("=");
                }
                else
                {
                    prints("<");
                }
            }
        }
    }
  return 0;
 }