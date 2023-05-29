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
        int x[3],y[3];
        for(int i=0;i<3;i++)
        {
            cin>>x[i]>>y[i];
        }
        if(y[0]==y[1] and y[0]!=0 and y[2]<=y[0])
        {
            cout<<(abs(x[0]-x[1]));
        }
        else if(y[0]==y[2] and y[0]!=0 and y[1]<=y[0])
        {
            cout<<(abs(x[0]-x[2]));
        }
        else if(y[1]==y[2] and y[1]!=0 and y[0]<=y[1])
        {
            cout<<(abs(x[1]-x[2]));
        }
        else{
            cout<<0;
        }
        nl;
    }
  return 0;
 }