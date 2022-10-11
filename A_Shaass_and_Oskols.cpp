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
    int si =10001;
     int t;
    cin>>t;
    int a[si];
    cin(a,t);
    
    int x[si],y[si];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        int p = x[i]-1;
        int left = y[i] - 1;
        int right = a[p] - y[i];
        a[p] = 0;
        //dbg(left);
        
        if(p == t-1)
        {
            a[p-1] += left;
        }
        else if(p == 0)
        {
            a[p+1] += right;
        }
        else
        {
             a[p-1] += left;
             a[p+1] += right;
        }
    }
    
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<"\n";
    }
   
  return 0;
 } 