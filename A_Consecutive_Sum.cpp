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
#define cin(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
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
        ll n,k;
        cin>>n>>k;
        ll a[n+1];
        cin(a,n);
        ll sum = 0;
        ll sum1 = 0;
        ll x = 0;
        
        ll y = 1;
        ll h = 0;
        for(int i=1;i<=n-k;i++)
        {
            h++;
           ll r = k*y+h;

           if(r>n)
           {
            break;
           }
            if(a[i]>a[r])
            {
                swap(a[i],a[r]);
            }
            if(i%k==0)
            {
                //swap(a[i],a[r]);
                h = 0;
                y++;
            }
        }
        ll sum2 = 0;
        for(int i=n-k+1;i<=n;i++)
        {
            sum2+=a[i];
        }
        if(sum1>sum2)
        {
            cout<<sum1<<"\n";
        }
        else
        {
            cout<<sum2<<endl;
        }
        
    }
  return 0;
 }