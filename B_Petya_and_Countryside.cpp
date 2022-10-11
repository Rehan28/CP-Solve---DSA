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
   int n;
   cin>>n;
   int a[n];
   cin(a,n);
   int sum = 0;
   for(int i=0;i<n;i++)
   {
    int x = 0;
    int y = 0;
    int fs = a[i];
    for(int j=i-1;j>-1;j--)
     {
        if(fs<a[j])
        {
            break;
        }
        fs = a[j];
        y++;
     }
     int ls = a[i];
     for(int j=i+1;j<n;j++)
     {
        if(ls<a[j])
        {
            break;
        }
        ls = a[j];
        i++;
        x++;
     }
     //dbg(y);
     int gap = x+y+1;
     if(sum<gap)
     {
        sum = gap;
     }
   }
   cout<<sum<<"\n";
  return 0;
 }