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
        int c = 0 ;
        long long int sum1 = 0;
        rep(i,0,n)
        {
            cin>>a[i];
            sum1 = sum1 + a[i];
            if(a[i]%2!=0 && a[i]!=1)
            {
                c++;
            }
        }
        sort(a,a+n);
        long long int x = 0;

        int f;
        if(c>0)
        {
            for(int i= n-1;i>-1;i--)
            {
                if(a[i]%2!=0)
                {
                    x = a[i];
                    f = i;
                    break;
                }
             }
        }
        else
        {
            x = a[n-1];
            f = n-1;
        }
        //dbg(x);
        long long int sum = x;
        x = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0 && f!=i)
            {
                 a[i] = a[i]/2;
                sum = (sum*2);
                i--;
                //x++;
                //dbg(a[i]);
                //dbg(sum);
            }
            else if(f!=i)
            {
                x = x + a[i];
            }
        }
        sum = sum + x;
        sum = max(sum,sum1);
        cout<<sum<<"\n";
        
        
    }
  return 0;
 }