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
        long long  int n,l,r;
     cin>>n>>l>>r;
     vector<long long int> v;
      long long int x ;
      int c = 0;
      rep(i,1,n+1)
      {
        
        x = (((l-1)/i)+1)*i;
        if(r>=x)
        {
          v.push_back(x);
        }
        else{
          prints("NO");
          c++;
          break;
        }
      }
      /*long long int b[n+1];

     for( long long int i=l;i<=r;i++)
     {
        for(long long int j=1;j<=n;j++)
        {
            if(a[j]==-1)
            {
                continue;
            }
            //cout<<"Is  "<<(i%j)<<endl;
            
            if(i%j==0)
            {
                b[j] = i;
                x++;
                a[j] = -1;
            }
        }
        /*if(i%x==0)
        {
           v.push_back(i);
           i=l-1;
            x++;
        }
        if(x==n+1)
        {
            break;
        }
     }*/
     //cout<<x<<endl;
    
     if(c==0)
     {
       prints("YES");
       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }
       cout<<"\n";
     }
  
    }
     return 0;
 }