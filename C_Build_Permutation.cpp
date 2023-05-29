#include<bits/stdc++.h>

using namespace std;using LL = long long;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define all(v) v.begin(),v.end()
void printv(vector<int> &v)
{
  cout<<"vector size : "<<v.size()<<endl;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
//muku28
int main()
{
    muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
          a[i] = i;
        }
        int b[n] = {0};
        for(int i=n-1;i>-1;i--)
        {
          double x = sqrt(2*a[i]);
          int y = x;
         
          y = y*y;
          //cout<<y<<"\n";
          int gap = (y-a[i]);
          //dbg(gap);
          if(b[i]==0 and gap>=0 and b[gap]==0)
          {
            if(a[i]==1 and b[0]==0)
            {
              gap = 0;
              swap(a[i],a[gap]);
              continue;
            }
            swap(a[i],a[gap]);
            b[i] = 1;
            b[gap] = 1;
          }
        }
        for(int i=0;i<n;i++)
        {
          cout<<a[i]<<" ";
        }
       cout<<"\n";
    }
  return 0;
 }