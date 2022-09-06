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
        int n;
        cin>>n;
        int a[n],b[n];
       rep(i,0,n)
       {
        cin>>a[i];
        b[i] = a[i];
       }
        sort(a,a+n);

        int x = 0;
        int y = 0;

        rep(i,0,n)
        {
            if(b[i]==a[0])
            {
                x = i;
            }
            if(b[i]==a[n-1])
            {
                y = i;
            }
        }
        if(x == 0 || y == n-1)
        { 
            printi((a[n-1])-a[0]);
        }
        else
        {
            int sum = 0;
            int sums = a[n-1]-b[0];
            int suml = b[n-1] - a[0];
           for(int i=0;i<n-1;i++)
           {
            if(sum<(b[i]-b[i+1]))
            {
                sum = (b[i]-b[i+1]);
            }
           }
           if(sum>sums and sum>suml)
           {
            printi(sum);
           }
           else if(sums>suml)
           {
            printi(sums);
           }
           else{
            printi(suml);
           }
            
        }
        
    }
  return 0;
 }