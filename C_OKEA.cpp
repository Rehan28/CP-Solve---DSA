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
        int n,k;
        cin>>n>>k;
        
            vector<int> v;
           
            int even = 0;
            int odd = 0;
            for(int i=1;i<=n*k;i++)
            {
               v.push_back(i);
               if(i%2==0)
               {
                even++;
               }
               else
               {
                odd++;
               }
            }
            if(even%k==0 and odd%k==0)
            {
                 cout<<"YES"<<"\n";
                 int c = 0;
            for(int i=0;i<n*k;i++)
            {
                if(v[i]%2!=0)
                {
                    cout<<v[i]<<" ";
                    c++;
                }
                if(c==k)
                {
                    c = 0;
                    nl;
                }
            }
            c = 0;
            for(int i=0;i<n*k;i++)
            {
                if(v[i]%2==0)
                {
                    cout<<v[i]<<" ";
                    c++;
                }
                if(c==k)
                {
                    c = 0;
                    nl;
                }
            }
            }
            else
            {
               cout<<"NO"<<"\n";
            }
           
        }
       
  return 0;
 }