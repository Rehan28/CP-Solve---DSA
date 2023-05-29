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
        int n,y;
        cin>>n>>y;
        string s[n];
        int one = 0;
        int zero = 0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            for(int j=0;j<y;j++)
            {
                if(s[i][j]=='1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }
            }
        }
        //dbg(one);
        int f = 0;
        for(int i=0;i<n-1;i++)
        {
            
            for(int j=0;j<y-1;j++)
            {
               // cout<<s[i][j]<<"\n";
              if(s[i][j]=='0')
              {
                if(i==0)
                {
                    if((s[i][j]==s[i+1][j]) or (s[i][j]==s[i+1][j+1]) or(s[i][j]==s[i][j+1]))
                    {
                        f = 1;
                    }
                }
                else
                {
                    if((s[i][j]==s[i+1][j]) or (s[i][j]==s[i+1][j+1]) or(s[i][j]==s[i][j+1]) or (s[i][j]==s[i-1][j+1]))
                    {
                    f = 1;
                    }
                }
                
              }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i][y-1]=='0' and (s[i][y-1]==s[i+1][y-1] or s[i][y-1]==s[i+1][y-2]))
            {
                f = 1;
            }
        }
        for(int i=0;i<y-1;i++)
        {
            if(s[n-1][i]=='0' and (s[n-1][i]==s[n-1][i+1] or s[n-1][i]==s[n-2][i+1]))
            {
                f = 1;
            }
        }
        if(f==1)
        {
            cout<<one<<"\n";
        }
        else if(zero==0)
        {
            cout<<one-2<<"\n";
        }
        else
        {
            cout<<one-1<<"\n";
        }
        

    }
  return 0;
 }