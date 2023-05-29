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
        ll n;
        cin>>n;
        ll a[n];
        cin(a,n);
        
        sort(a,a+n);
        ll x = a[0];
        ll y = a[n-1];
        ll c = 0;
        ll c1 = 0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                c++;
            }
            else if(a[i]==y)
            {
                c1++;
            }
        }
       if(c==0 or c1 ==0)
       {
        ll sum = 0;
        c = max(c,c1);
        c--;
        for(ll i=c;i>=1;i--)
        {
            sum += i;
        }
        cout<<2*sum<<"\n";
       }
       else
       {
        cout<<(2*(c*c1))<<"\n";
       }
    //dbg(c);
   // dbg(c1);
        
    }
  return 0;
 }