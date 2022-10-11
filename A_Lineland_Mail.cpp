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
     int n;
     cin>>n;
     int a[n];
     cin(a,n);
     for(int i=0;i<n;i++)
     {
        if(i==0)
        {
            cout<<(a[i+1]-a[i])<<" "<<(a[n-1]-a[i]);
        }
        else if(i==n-1)
        {
            cout<<(a[i] - a[i-1])<<" "<<(a[i]-a[0]);
        }
        else
        {
            int x = a[i+1] - a[i];
            int y = a[i] - a[i-1];
            int mini = min(x,y);
            x = a[n-1] - a[i];
            y = a[i] - a[0];
            int maxv = max(x,y);
            cout<<mini<<" "<<maxv;
        }
        nl;
     }
  return 0;
 }