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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i] = a[i]*x;
        }
        sort(a,a+n);
        sort(b,b+n);
       int y = n;
        int j = 0;
        ll c[n]={0};
        ll d[n]={0};
        for(int i=0;i<y;i++)
        {
            
            
            for(;j<y;j++)
            {
                if(c[i]==-1)
                {
                    break;
                }
                if(b[i]==a[j] and d[j]!=-1)
                {
                    n = n-2;
                    c[j] = -1;
                    d[j] = -1;
                    //cout<<j<<"Rhean"<<i<<"\n";
                    j++;
                   break;
                }
                if(b[i]<(a[j]))
                {
                    j--;
                    break;
                }
               
            }
            
            
        }
        cout<<n<<"\n";
    }
  return 0;
 }