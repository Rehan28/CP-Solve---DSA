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
        int a[n];
        cin(a,n);
        int va = 0;
        int tt = 0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==2 and va>0)
            {
                int lagbe = (sum/2)+1;
                tt = va - lagbe;
                //dbg(i);
                //dbg(va);
                continue;
            }
            if(a[i]==1)
            {
                sum++;
            }
            if(tt<=0 and a[i]==1)
            {
                va++; 
            }
            tt--;
        }
        cout<<va<<"\n";
    }
  return 0;
 }