#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        int n,x;
        cin>>n>>x;
        if((n%x==0 and x==2))
        {
            cout<<x<<" ";
            int y = 0;
            int a[n] = {0};
            int c = 1;
           
            //dbg(y);
            c = 1;
            for(int i=2;i<n;i++)
            {
              
               if(i%2==0)
               {
                cout<<i*2<<" ";
                //c++;
                continue;
               }
                cout<<i<<" ";
            }
            cout<<1<<" ";
        }
        else if((n==3 and x==3))
        {
            cout<<3<<" "<<2<<" "<<1;
        }
        else
        {
            cout<<-1<<"\n";
        }
       nl;
    }
  return 0;
 }