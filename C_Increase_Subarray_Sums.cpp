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
        ll n,p;
        cin>>n>>p;
        ll a[n];
        cin(a,n);

        ll pfx[n];
        pfx[0] = a[0];
        for(int i=1;i<n;i++)
        {
            pfx[i] = pfx[i-1] + a[i];
            //cout<<pfx[i]<<"\n";
        }
        
        ll sum[n+1] = {0};
        
        for(int i=1;i<=n;i++)
        {
            ll sum1[n];
            ll x = i-1;
            for(int j=0;j<=n-i;j++)
            {
                //cout<<x<< " is "<<j<<"\n";
                if(j==0)
                {
                    sum1[j] = pfx[x];
                }
                else{
                    sum1[j] = pfx[x] - pfx[j-1];
                }

                //cout<<sum1[j]<<"\n";
                if(j==0)
                {
                    sum[i] = sum1[j];
                }
                else if(sum1[j]>sum[i])
                {
                    sum[i] = sum1[j];
                }
                x++;
            }
            //cout<<sum[i]<<"\n";
        }

        ll add[n+1];
        add[0] = 0;
        for(int i=1;i<=n;i++)
        {
            add[i] = add[i-1]+p;
        }

        for(int i=0;i<=n;i++)
        {
            
            ll sum2 = sum[0];
            for(int j=1;j<=n;j++)
            {
                ll temp;
                if(j>=i)
                {
                    temp = sum[j]+add[i];
                }
                else{
                    temp = sum[j] + add[j] ;
                }
                //cout<<"temp v "<<temp<<"\n";
                if(temp>sum2)
                {
                    sum2 = temp;
                }
            }
            cout<<sum2<<" ";
        }
        nl;

    }
  return 0;
 }