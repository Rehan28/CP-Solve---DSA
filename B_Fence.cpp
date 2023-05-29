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
    int n,k;
    cin>>n>>k;
    int a[n];
    cin(a,n);
    int x = 0;
    int sum = 0;
    int psum[n];
    psum[0] = a[0];
    for(int i=1;i<n;i++)
    {
        psum[i] = psum[i-1] + a[i];
    }
    for(int i=0;i<n-k+1;i++)
    {
        int tot;
        if(i==0)
        {
            tot = psum[i+k-1];
        }
        else
        {
            tot = psum[i+k-1]-psum[i-1]; 
        }
        //dbg(tot);
        if(tot<sum or i==0)
        {
            sum = tot;
            x = i;
        }
    }
    x++;
    cout<<x<<"\n";
  return 0;
 }