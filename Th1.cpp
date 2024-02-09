#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//Muku28
vector<pair<int, int>> vp;
int hanoi(int n,int src,int des,int helper)
{
  if(n==0)
  {
      return 0;
  }
  int sum = 1;
  sum += hanoi(n - 1, src, helper, des);
  //cout << "From : " << src << " " << des << "\n";
  vp.push_back(make_pair(src, des));
  sum += hanoi(n - 1, helper, des, src);
  return sum;
}

//Muku28
int Rehan()
{
    int n;
    cin >> n;
    cout<<hanoi(n, 1, 3, 2)<<"\n";
    for (int i = 0; i < vp.size();i++)
    {
        cout << vp[i].first << " " << vp[i].second << "\n";
    }
        return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }