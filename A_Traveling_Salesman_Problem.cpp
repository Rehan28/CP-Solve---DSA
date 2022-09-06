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
         int sum = 0;
        int x = 0;
        int x1=0,y=0,y1=0;
        rep(i,0,n)
        {
             int a;
              int b;
            cin>>a>>b;
            if(a==0 && b>0)
            {
                if(x<b)
                {
                    x = b;
                }
            }
            else if(a==0){
                if(x1>b)
                {
                    x1 = b;
                }
            }
            else if(b==0 && a>0)
            {
                if(y<a)
                {
                    y = a;
                }
            }
            else
            {
                if(y1>a)
                {
                    y1 = a;
                }
            }
        }
        sum = abs(x*2)+abs(x1*2)+abs(y*2)+abs(y1*2);
        cout<<sum<<"\n";
    }
  return 0;
 }
