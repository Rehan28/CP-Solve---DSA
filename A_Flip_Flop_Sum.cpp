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
        int a[n];
        cin(a,n);
        int sum = 0;
       bool f = true;
        for(int i=0;i<n-1;i++)
        {
            if((a[i]==a[i+1] and a[i]==-1))
            {
                a[i] = 1;
                a[i+1] = 1;
                f = false;
                break;
            }
            
        }
        for(int i=0;i<n-1;i++)
        {
            
            if(a[i]!=a[i+1] or f == false)
            {
                break;
            }
            else if((i+1==n-1))
            {
                 if(a[i]==1)
                 {
                    a[i] = -1;
                 }
                 else
                 {
                    a[i] = 1;
                 }

                 if(a[i+1]==1)
                 {
                    a[i+1] = -1;
                 }
                 else
                 {
                    a[i+1] = 1;
                 }

                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum += a[i];
        }
        cout<<sum<<"\n";
    }
  return 0;
 }