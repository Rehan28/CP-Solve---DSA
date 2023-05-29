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
        int a[n][5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>a[i][j];
            }
        }
        bool f = false;
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                int aa = 0;
                int bb = 0;
                int ab = 0;
                int cd = 0;
                for(int k=0;k<n;k++)
                {
                   if(a[k][i]==1 and a[k][j]==1)
                   {
                    ab++;
                    continue;
                   }
                   if(a[k][i]==1)
                   {
                    aa++;
                   }
                   if(a[k][j]==1)
                   {
                    bb++;
                   }
                   
                   if(a[k][i]!=1 and a[k][j]!=1)
                   {
                    cd++;
                   }
                }
               
                if(cd==0 and aa<=n/2 and bb<=n/2)
                {
                    f = true;
                    goto rehan;
                }
            }
        }
        rehan:
        if(f)
        {
            yes;
        }
        else
        {
            no;
        }
    }
  return 0;
 }
 