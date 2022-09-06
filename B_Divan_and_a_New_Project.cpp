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
        
        vector<pair<long long int ,int>> v;
        rep(i,0,n)
        {
            long long int a;
            cin>>a;
            v.push_back(make_pair(a,i));
        }
        sort(all(v));
        int x = 1;
        int left = 0;
        int y = 1;
       long long int time = 0;
       for(int i=n-1;i>-1;i--)
       {
        if(left==0)
        {
            x++;
            time = time + (long long)(2*abs(1-x)*(v[i].first));
            v[i].first = x;
            left++;
        }
        else
        {
            y--;
             time = time +(long long)(2*abs(1-y)*(v[i].first));
            v[i].first = y;
            left = 0;
        }
        //dbg(time);
       }
       int f[n];
       rep(i,0,n)
       {
        f[v[i].second]=v[i].first;
       }
      cout<<time<<"\n";
       cout<<1<<" ";
       rep(i,0,n)
       {
        cout<<f[i]<<" ";
       }
       cout<<"\n";
    


        
    }
  return 0;
 }