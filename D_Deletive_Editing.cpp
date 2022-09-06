#include<bits/stdc++.h>
//muku28
using namespace std;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
//muku28
int main()
{
    muku28();
     int t;
    cin>>t;
   while(t--)
    {
     string s,f;
     cin>>s>>f;
     int x = 0;
     bool h = 1;
   for(int i=0;i<f.size();i++)
     { 
        int c = 0;
        int count = 0;
        for(int j=i;j<f.size();j++)
        {
            if(f[i]==f[j])
            {
                count++;
            }
        }
        //dbg(count);
        for(int j=x;j<s.size();j++)
        {
            if(f[i]==s[j])
            {
               c++;
            }
        }
        //dbg(c);
        if(count>c)
        {
            h = 0;
            break;
        }
        int g = c-count; 
        for(int j=x;j<s.size();j++)
        {
            
            
            if(s[j] == f[i])
            {
                if(g==0)
                {
                x = j+1; //dbg(x);
                break;
                }
               g--;
            }
        }
        
     }
     if(h)
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