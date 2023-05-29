#include<bits/stdc++.h>
/* 
ID: your id 
LANG: C++17
PROB: Problem 1. Fence Painting
*/
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
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

//Muku28
int main()
{
    //setIO("paint");
    Muku28();
    int n;
    cin>>n;
    vector<pair<char,int>> p;
    for(int i=0;i<n;i++)
    {
        char c;
        int x;
        cin>>c>>x;
        p.push_back(make_pair(c,x));
    }
    int res = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int l = 0;
        for(int j=0;j<n;j++)
        {
            if((p[j].first=='L' and p[j].second<p[i].second) or (p[j].first=='G' and p[j].second>p[i].second))
            {
                l++;
            }
        }
        res = min(res,l);
    }
   cout<<res<<"\n";
  return 0;
 }