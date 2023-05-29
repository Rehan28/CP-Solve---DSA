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
    int a[6];
    cin(a,6);
    int sum = 0;
    for(int i=0;i<6;i++)
    {
        sum += a[i];
    }
    for(int i=0;i<(6-2);i++)
    {
       for(int j=0;j<(6-1);j++)
        {  
          
          if(i!=j)
          {
            for(int k=0;k<6;k++)
            {
                if(j!=k and k!=i)
                {
                   int x = a[i] + a[j] + a[k]; 
                   if((sum-x)==x)
                    {
                   yes;
                   return 0;
                    }
                }
            }
          }
            
           
            
        }
        
    }
   no;
    
  return 0;
 }