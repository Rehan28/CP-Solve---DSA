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
        int a,k;
        cin>>a>>k;
        int x[a];
        int b[a];
       rep(i,0,a)
       {
        cin>>x[i];
        b[i] = x[i];
       }
       sort(b,b+k);
       sort(b+k,b+a);
       /*rep(i,k,a)
       {
        dbg(b[i]);
       }*/
       int c = 0;
       if(a==k)
       {
        c = 0;
       }
       else
       {
         int h = k-1;
        // dbg(h);
        for(int i=k;i<a;i++)
          {
           if(b[i]<b[h])
           {
            c++;
           }
           h--;
           if(h<0)
           {
            break;
           }
        }
       }
      
       
       
       
       printi(c);


    }
  return 0;
 }