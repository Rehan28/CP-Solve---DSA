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
        ll a,b;
        cin>>a>>b;
        ll m =sqrt(a);
        ll x = 0;
        ll y = sqrt(a);
        ll step = 0;
        ll step1 = 0;
        while(1)
        {
            if(a==1)
            {
                step = 1;
                break;
            }
            if(a%m==0 and m<=b)
            {
                step += (x) + (a/m);
                break;
            }
            if(x==y)
            {
                step += x;
                break;
            }
            x++;
            m--;
        }
        x = m;
        y = sqrt(b);
        m = sqrt(b);
        //cout<<m<<"\n";
        while(1)
        {
            if(b==1)
            {
                step = 1;
                break;
            }
            if(b%m==0 and m!=1)
            {
                step += (x) + (b/m);
                break;
            }
            if(x==y)
            {
                step += x;
                break;
            }
            x++;
            m--;
        }
        //fhjhfjdshf
        m = sqrt(b);
        x = 0;
        y = sqrt(b);
        while(1)
        {
            if(b==1)
            {
                step1 = 1;
                break;
            }
            if(b%m==0 and m<=a)
            {
                step1 += (x) + (b/m);
                break;
            }
            if(x==y)
            {
                step1 += x;
                break;
            }
            x++;
            m--;
        }
        x = m;
        y = sqrt(a);
        m = sqrt(a);
          cout<<step1<<"\n";
        while(1)
        {
            if(a==1)
            {
                step1 = 1;
                break;
            }
            if((a%m==0 and m!=1))
            {
                step1 += (x) + (a/m);
                break;
            }
            if(x==y)
            {
                step1 += x;
                break;
            }
            x++;
            m--;
        }
        cout<<m<<"\n";
      
        cout<<min(step1,step)<<"\n";
    }
  return 0;
 }