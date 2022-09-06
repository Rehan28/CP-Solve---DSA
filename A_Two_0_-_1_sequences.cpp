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
        int n,m;
        cin>>n;
        cin>>m;
        string a;
        string b;
        
        cin>>a;
        cin>>b;

        int c = 0;
        int f = 1;

        int x = n-m+1;
        //dbg(x);
        for(int i=x;i<n;i++)
        {    
            if(a[i]==b[f])
            {
                c++;
                //break;
            }
            f++;  
        }
        //dbg(c);

        if(c==(m-1))
        {
            if(b[0]=='0')
            {
               for(int i=0;i<x;i++)
               {
                if(a[i]=='0')
                {
                    prints("YES");
                    break;
                }
                if(i==(x-1))
                {
                    prints("NO");
                }
               }
            }
            else
            {
                for(int i=0;i<x;i++)
               {
                if(a[i]=='1')
                {
                    prints("YES");
                    break;
                }
                if(i==(x-1))
                {
                    prints("NO");
                }
               }
            }
        }
        else
        {
            prints("NO");
        }
        //prints(a);
        //dbg(n1);
        
        
    }
  return 0;
 }