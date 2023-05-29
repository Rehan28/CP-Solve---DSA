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
     vector<pair<int,int>> vp;
     for(int i=0;i<n;i++)
     {
        int a,b;
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
     }
     vector<int> v;
     sort(vp.begin(),vp.end());
     for(int i=1;i<vp[0].first;i++)
     {
        v.push_back(i);
     }
     for(int i=0;i<n-1;i++)
     {
        if(vp[i].second<vp[i+1].first)
        {
            for(int j=vp[i].second+1;j<vp[i+1].first;j++)
            {
                v.push_back(j);
            }
        }
        if(vp[i+1].second<vp[i].second)
        {
            swap(vp[i+1].second,vp[i].second);
        }
     }
     for(int i=vp[n-1].second+1;i<=m;i++)
     {
        v.push_back(i);
     }
     if(v.size()==0)
     {
        cout<<0<<"\n";
        return 0;
     }
     cout<<v.size()<<"\n";
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
  return 0;
 }