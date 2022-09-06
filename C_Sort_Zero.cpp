#include<bits/stdc++.h>
//muku28
using namespace std;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
//muku28
int main()
{
    muku28();
     int t;
    cin>>t;
   while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       cin(a,n);
       int g = 0;
       int c = 0;
       if(n==1)
       {
        printi(0);

       }
       else
       {
        for(int i=n-1;i>-1;i--)
       {
        if(a[i]!=0)
        {  
          int y = 0;
          for(int j=i-1;j>-1;j--)
          {
            if(a[i]==a[j])
            {
                a[j] = 0;
                y++;
            }
          }
          if(y>0 || g>0)
          {
            a[i] = 0;
            c++;
          }
          else if(i==0)
          {
            c++;
            break;
          }
          else
          {
            if(a[i]<a[i-1])
            {
                g++;
                c++;
            }
            else
            {
                g=0;
            }
          }
          
        }
       } 
       cout<<c<<"\n";
       }
       
    }
  return 0;
 }