#include<bits/stdc++.h>
//muku28
using namespace std;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
//muku28
int main()
{
    muku28();
    int array[100], position, c, n;
    cin>>n;
   for (c = 0; c < n; c++)
      cin>>array[c];

   cout<<"Enter the location where you wish to delete element"<<endl;
   cin>>position;

   if (position >= n+1)
      cout<<"Deletion not possible  "<<endl;
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      cout<<"Resultant array : "<<endl;

      for (c = 0; c < n - 1; c++)
         cout<<array[c]<<endl;
   }

   return 0;
 }