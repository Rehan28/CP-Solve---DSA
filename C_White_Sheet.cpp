#include<bits/stdc++.h>
//muku28
using namespace std;typedef long long ll;
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
   
        ll a[3],b[3],x[3],y[3];
        rep(i,0,3)
        {
            cin>>a[i]>>b[i]>>x[i]>>y[i];
            
        }
        ll t = 0;
        ll area = (x[0]-a[0])*(y[0]-b[0]);
        ll interA = (max(t,(min(x[0],x[1])-max(a[0],a[1]))) * max(t,(min(y[0],y[1])-max(b[1],b[0]))));
        ll interB = (max(t,(min(x[0],x[2])-max(a[0],a[2]))) * max(t,(min(y[0],y[2])-max(b[0],b[2]))));
        
        
         cout<<area<<endl;
        area = area - interA - interB;
        cout<<(interA + interB)<<endl;
        
       

        if(area > 0)
        {
            prints("YES");
        }
        else
        {
            prints("NO");
        }
    
  return 0;
 }