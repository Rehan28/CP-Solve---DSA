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
       ll x,y;
       cin>>x>>y;
       ll point = max(x,y);
       ll mini = min(x,y);
       ll tt = (point*(point-1))+1;
       //cout<<tt<<"\n";
       ll res = 0;
       if((point%2==0))
       {
        if(mini==x)
        {
            res = tt - (point-x);
        }
        else
        {
            res = tt + (point-y);
        }
       }
       else
       {
        if(mini==x)
        {
            res = tt + (point-x);
        }
        else
        {
            res = tt - (point-y);
        }
       }
       cout<<res<<"\n";
    }
  return 0;
 }