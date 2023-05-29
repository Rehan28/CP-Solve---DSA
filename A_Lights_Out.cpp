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
   
        int a[3][3];
        int b[3][3] = {0};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
       // char ch[3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a[i][j]>0)
                {
                    b[i][j] += a[i][j];
                   if(i==0)
                   {
                    if(j==0)
                    {
                        b[i][j+1] += a[i][j];   
                    }
                    else if(j==2)
                    {
                         b[i][j-1] += a[i][j];
                    }
                    else
                    {
                        b[i][j+1] += a[i][j];
                        b[i][j-1] += a[i][j];
                    }
                     b[i+1][j] += a[i][j];
                   }
                   else if(i==2)
                   {
                    if(j==0)
                    {
                        b[i][j+1] += a[i][j];   
                    }
                    else if(j==2)
                    {
                         b[i][j-1] += a[i][j];
                    }
                    else
                    {
                        b[i][j+1] += a[i][j];
                        b[i][j-1] += a[i][j];
                    }
                     b[i-1][j] += a[i][j];
                   }
                   else
                   {
                    if(j==0)
                    {
                        b[i][j+1] += a[i][j];   
                    }
                    else if(j==2)
                    {
                         b[i][j-1] += a[i][j];
                    }
                    else
                    {
                        b[i][j+1] += a[i][j];
                        b[i][j-1] += a[i][j];
                    }
                     b[i+1][j] += a[i][j];
                     b[i-1][j] += a[i][j];
                   }
                }
              
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(b[i][j]%2)
                {
                    
                   cout<<'0';
                }
                else
                {
                    //dbg(a[i][j]);
                    cout<<'1';
                }
            }
            nl;
        }

        
    
  return 0;
 }