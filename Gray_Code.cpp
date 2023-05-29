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
#define modnum 1000000007
vector<string> gray(int n)
{
    vector<string> res;
    if(n==1)
    {
        res.push_back("0");
        res.push_back("1");
        return res;
    }
    vector<string> pre = gray(n-1);
    int x = pre.size();
    for(int i=0;i<x;i++)
    {
        res.push_back("0"+pre[i]);
    }
    for(int i=0;i<x;i++)
    {
        res.push_back("1"+pre[i]);
    }
    return res;
}
//Muku28
int main()
{
    Muku28();
    int n;
    cin>>n;
    vector<string> sv = gray(n);
    sort(sv.begin(),sv.end());
    for(int i=0;i<sv.size();i++)
    {
        cout<<sv[i]<<"\n";
    }
  return 0;
 }