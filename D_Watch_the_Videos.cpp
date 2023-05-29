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
   
        ll n,m;
        cin>>n>>m;
        ll a[n];
        cin(a,n);
       ll time = a[0];
       //m = m - a[0];
      // cout<<m<<"\n";
       for(int i=1;i<n-1;i++)
       {
         m -= a[i];
         if(m>a[i])
         {
            ll dakh = a[i-1];
            ll dwon = a[i];
            if(dakh<=dwon)
            {
                //time += dakh;
                time += dwon;
                m += a[i-1];
                
            }
            else
            {
                time += a[i-1];
                m -= (a[i] + a[i-1]) + a[i];
            }
         }
         else if(m==a[i])
         {
            time += a[i-1]+a[i-1];
            m += a[i-1];
         }
         else
         {
            time += a[i]-a[i-1];
            m += a[i-1];
            //dbg(5);
            i--;
         }
         //cout<<m<<"\n";
       }
       ll t = ((a[n-1]-a[n-2]) + a[n-1]);
       //cout<<t<<"\n";
       time += t;
       cout<<time<<"\n";
    
  return 0;
 }