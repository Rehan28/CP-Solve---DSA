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
        ll m,n;
        cin>>m>>n;
        ll a[n];
        cin(a,n);
        sort(a,a+n);
        ll gap[n+1];
        for(int i=0;i<n-1;i++)
        {
            gap[i] = a[i+1] - a[i]-1;
            //cout<<gap[i]<<"\n";
        }
        gap[n-1] = (a[0]-1)+(m-a[n-1]);
        //cout<<gap[n-1]<<"\n";
        sort(gap,gap+n);
        ll x = 1;
        ll sum = 0;
        for(int i=n-1;i>-1;i--)
        {
            if(x==gap[i])
            {
                x--;
            }
            sum += min(gap[i],x);  
            x +=4;
          
        }
        cout<<sum+n<<"\n";

    }
  return 0;
 }