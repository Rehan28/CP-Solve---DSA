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
     int n,f;
     cin>>n>>f;
     f = n-f;
     vector<pair<int,int>> p;
     int d[n];
     int e[n];
     for(int i=0;i<n;i++)
     {
        int a ,b;
        cin>>a>>b;
        d[i] = min((2*a),b);
        e[i] = min(a,b);
        int g = d[i] - e[i];
        p.push_back(make_pair(g,i));
     }
     sort(p.begin(),p.end());
     int sum = 0;
     for(int i=n-1;i>-1;i--)
     {
        int x = p[i].second;
        if(f)
        {
            sum += d[x];
        }
        else
        {
            sum +=e[x];
        }
        f--;
     }
     cout<<sum<<"\n";
  return 0;
 }