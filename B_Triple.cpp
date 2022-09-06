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
        vi r;
        rep(i,0,n)
        {
            int x;
            cin>>x;
            r.push_back(x);
        }
        sort(r.begin(),r.end());
        int count = 0;
        int t =0;
        
        rep(i,0,n)
        {
            //printi(r[i]);
           count++;
           if(count == 3)
           {
            t++;
            printi(r[i]);
            break;
           }
           
           if(r[i]!=r[i+1])
           {
            count = 0;
           }
        }
        if(t==0)
        {
            printi(-1);
        }

    }
  return 0;
 }