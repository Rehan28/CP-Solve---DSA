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
       int n,m;
       cin>>n>>m;
       int a[n+1][m+1];
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
       }
       int sum = 0;
       
       for(int i=0;i<n;i++)
       {
        int res = 0;
        for(int j=0;j<m;j++)
        {
            int x = i;
            int y = j;
            
            while(x>=0 and x<n and y>=0 and y<m)
            {
                res += a[x][y];
                x--;
                y--;
            }
            
            x = i;
            y = j;
            while(x>=0 and x<n and y>=0 and y<m)
            {
                res += a[x][y];
                x++;
                y--;
                //dbg(x);
            }
            x = i;
            y = j;
            while(x>=0 and x<n and y>=0 and y<m)
            {
                res += a[x][y];
                x--;
                y++;
            }
            x = i;
            y = j;
            while(x>=0 and x<n and y>=0 and y<m)
            {
                res += a[x][y];
                x++;
                y++;
            }
            res -= a[i][j]*3;
            //cout<<i+1<<" "<<j+1<<" "<<res<<"\n";
            sum = max(sum,res);
            res = 0;
        }
       }
       cout<<sum<<"\n";
       

    }
  return 0;
 }