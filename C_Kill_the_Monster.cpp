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
ll moveh(ll x,ll y)
{
    if(x%y==0)return (x/y);
    else return (x/y)+1;
}
ll moved(ll x,ll y)
{
    if(x%y==0)return (x/y);
    else return (x/y)+1;
}
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll hc,dc,hm,dm,k,w,a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        hc = hc + (k*a);
        bool c = false;
        for(int i=0;i<=k;i++)
        {
            ll x = moveh(hm,dc);
            //cout<<x<<endl;
            ll y = moved(hc,dm);
            //cout<<x<<endl;
            if(x<=y)
            {
                c = true;
                break;
            }
            else
            {
                hc = hc - a;
                dc = dc + w;
            }
        }
        if(c) prints("YES");
        else prints("NO");
    }
  return 0;
 }