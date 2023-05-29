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
int lower_bound(int a[] ,int x,int n)
{
    int lo = 0;
    int hi = n-1;
    int mid;
    while(hi-lo>1)
    {
        mid = lo + (hi - lo)/2;
        if(a[mid]<x)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if(a[lo]>=x)
    {
        return lo;
    }
    else if(a[hi]>=x)
    {
        return hi;
    }
    return -1;
}
int upper_bound(int a[],int x,int n)
{
    int lo = 0;
    int hi = n-1;
    int mid;
    while(hi-lo>1)
    {
        mid = lo + (hi-lo)/2;
        if(a[mid]<=x)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if(a[lo]>x)
    {
        return lo;
    }
    else if(a[hi]>x)
    {
        return hi;
    }
    return -1;
}
double eps = 1e-10;
double multiply(double n,int x)
{
    double sum = n;
    for(int i=1;i<x;i++)
    {
        sum *= n;
    }
    return sum;
}
double nthsqrt(double x,int n)
{
    double lo = 1;
    double hi = x;
    double mid;
    while(hi-lo>eps)
    {
        mid = lo + (hi-lo)/2;
        if(multiply(mid,n)<x)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    return lo;
}
//Muku28
int main()
{
    Muku28();
    double n;
    cin>>n;
    int x;
    cin>>x;
    cout<<setprecision(10)<<nthsqrt(n,x)<<"\n";
  return 0;
 }