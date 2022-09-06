#include<bits/stdc++.h>

using namespace std;using LL = long long;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
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
       int b[n];
       int x = n-1;
       set<int> c;
       for(int i =0;i<n;i++)
       {
        cin>>a[i];
        
        b[x]=a[i];
        //c.insert(b[x]);
        x--;
       }
        int y = 0;
       for(int i=0;i<n;i++)
       {
        
        if(c.find(b[i])!=c.end())
        {
           
          break;
        }
        else
        {
           c.insert(b[i]);
        }
        //c.erase(c.begin()); 
      }
       
       printi((n-c.size()));
       
    }
  return 0;
 }