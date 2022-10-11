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
    int n,m;
    cin>>n>>m;
    int a[m];
    vector<pair<int,int>> vp;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        vp.push_back(make_pair(b,a));
    }
    sort(vp.begin(),vp.end());
    int sum = 0;
    int i =m-1;
    while(n!=0)
    {
       int x = vp[i].second;
       if(x>n)
       {
          sum = sum + (n*vp[i].first);
          n = 0;
       }
       else
       {
         sum += (x*vp[i].first);
         n -= x;
       }
       if(i==0)
       {
        n = 0;
       }
       i--;
    }
    cout<<sum<<"\n";
  return 0;
 }