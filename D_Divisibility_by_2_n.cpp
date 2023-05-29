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
        vector<ll> v;
        vector<ll> v1;
        ll sum = 1;
        ll sum1 = 0;

        ll Fix = pow(2,n);
        ll y = 0;
    bool gg = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
            if((a[i]%2==0 or (i+1)%2==0) and i!=0)
            {
               v.push_back(a[i]);
               v1.push_back(a[i]*(i+1));
               //sum1 *= a[i]*(i+1);
            }
            if(a[i]%2!=0 and (i+1)!=0)
            {
                gg = false;
            }
            sum *=a[i];
            
        }
        bool b = false;
       //cout<<sum<<"\n";
        for(int i=0;i<=v.size();i++)
        {
            if((sum)%Fix==0)
            {
                b = true;
                break;
            }
            y++;
            //cout<<v1[i]<<"\n";
            sum = (sum/v[i]) * v1[i];
        }
        if(b and gg)
        {
            cout<<y<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }

    }
  return 0;
 }