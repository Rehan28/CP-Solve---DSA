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
        int a[n+1];
        if(n%2==0)
        {
            for(int i=n;i>0;i = i-2)
            {
                a[i] = i-1;
                a[i-1]= i;
            }

        }
        else{
            a[1] = 1;
            for(int i=n;i>1;i = i-2)
            {
                a[i] = i-1;
                a[i-1]= i;
            }
        }
        rep(i,1,n+1)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n"; 
       
    }
  return 0;
 }