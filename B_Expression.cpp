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
    int a,b,c;
    cin>>a>>b>>c;
    int sum = 0;
    if(a==1)
    {
        sum = (a+b)*c;
    }
    else if(b==1)
    {
        if(a<c)
        {
            sum = (a+b)*c;
        }
        else
        {
            sum = (b+c)*a;
        }
    }
    else if(c==1)
    {
        sum = (b+c)*a;
    }
    else
    {
        sum = a*b*c;
    }
    cout<<sum<<"\n";
  return 0;
 }