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
        long long int a[n];
        cin(a,n);
        unsigned long long int sum = 0;
        int zero = 0;
        int neg = 0;
       for(int i=0;i<n;i++)
       {
        if(a[i]==0)
        {
            zero++;
        }
        if(a[i]<=0)
        {
          neg++;
        }
       }


       if(neg!=0)
       {
        if((neg%2==0))
       {
         for(int i=0;i<n;i++)
         {
            sum += abs(a[i]);
          }
       }
       else if(neg%2!=0)
       {
          unsigned long long int mn = 1000000000000000000;
          unsigned long long int b;
          int x = 0;
          int y = 0;
         for(int i=0;i<n-1;i++){
            if((a[i]>0 and a[i+1]<0))
            {
                b = a[i] + a[i+1];
                if(b<mn)
                {
                    mn = b;
                    x = i+1;
                    y = i;
                }
            }
            else if((a[i+1]>0 and a[i]<0)){
                b = a[i] + a[i+1];
                if(b<mn)
                {
                    mn = b;
                    x = i;
                    y = i+1;
                }
            }
         }
         //cout<<x<<" "<<y<<"\n";
        if(max(abs(a[x]),abs(a[y]))==(abs(a[x])))
        {
            for(int i=0;i<n;i++)
             {
                if(y!=i)
                {
                 sum += abs(a[i]);
                }
             }
             sum -= a[y];
            }
           else
            {
            for(int i=0;i<n;i++)
             {
                if(x!=i)
                {
                 sum += abs(a[i]);
                }
             }
             sum += a[x];
            }
        
       }
       }
       else
       {
        for(int i=0;i<n;i++)
          {
            sum += abs(a[i]);
          }
       }
       
       cout<<sum<<"\n";

    }
  return 0;
 }