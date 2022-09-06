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
        int m;
        cin>>m;
        int a[m];
        int b[m];
        
        int sum = 0;
        rep(i,0,m)
        {
            cin>>a[i];
        }
        rep(i,0,m)
        {
            cin>>b[i];
        }
        int i = 0;
        for(int j=0;j<(m+m-1);j++)
        {
            if(c==0)
            {
               if(x==0)
               {
                if(a[i+1]>b[i])
                {
                    if(a[i]>b[i])
                    {
                        sum = b[i];
                    }
                    else
                    {
                        sum++;
                    }
                    x=1;
                }
               }
               else
               {

               }
               i++;
            }
            else
            {
               
                if(y==0)
               {
                if(a[k+1]>b[k])
                {
                    if(a[k]>b[k])
                    {
                        sum = b[k];
                    }
                    else
                    {
                        sum++;
                    }
                    c=0;
                }
                else
                {
                    goto rehan;
                }
               }
               else{
                if(b[k]<b[k+1])
                    {
                        sum = b[k];
                    }
                    else
                    {
                        sum++;
                    }
               }
               k++;

            }
            
        }
        
    }
  return 0;
 }