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
        int two = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='2')
            {
                two++;
            }
        }
        int c = 0;
        int tt = 0;
        char ss[n][n];
        if(two>2 or two==0)
        {
            prints("YES");
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    c = 1;
                }
                else
                {
                    c = 2;
                }
                int f = 0;
                ss[i][i] = 'X';
               for(int j=i+1;j<n;j++)
                {
                  
                 
                  if(c==1)
                  {
                    ss[i][j] = '=';
                    ss[j][i] = '=';
                  }
                  else if(f==0)
                  {
                   
                    if(s[j]=='1')
                    {
                       ss[i][j] = '=';
                       ss[j][i] = '=';
                    }
                    else
                    {
                        ss[i][j] = '+';
                        ss[j][i] = '-'; 
                        f = 1;
                    }
                    
                   
                  }
                  else
                  {
                    if(s[j]=='1')
                    {
                       ss[i][j] = '=';
                       ss[j][i] = '=';
                    }
                    else
                    {
                      
                       ss[i][j] = '-';
                       ss[j][i] = '+'; 
                    }
                  }
                   
                }
              
            } 
            for(int i=0;i<n;i++)
            {
               for(int j=0;j<n;j++)
               {
                cout<<ss[i][j];
               }
               nl;
            }

        }
        else
        {
            no;
        }
        
    }
  return 0;
 }