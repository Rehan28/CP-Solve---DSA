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
        int a[n];
        cin(a,n);
        sort(a,a+n);
        vector<int> v;
        for(int i=1;i<a[0];i++)
        {
            v.push_back(i);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=a[i]+1;j<a[i+1];j++)
            {
                v.push_back(j);
            }
        }
        //cout<<m;
        int x = a[n-1];
        int y = v.size();
        int sum = 0;
        for(int i=0;i<y;i++)
        {
            sum += v[i];
        }
        if(sum>m)
        {
            prints("NO");
        }
        else if(sum==m)
        {
            prints("YES");
        }
        else
        {
            int dif = m - sum;
            bool f = false;
            for(int i=x+1;;i++)
            {
                sum += i;
                if(sum==m)
                {
                    f = true;
                    break;
                }
                if(sum>m)
                {
                  break;
                }
            }
            if(f)
            {
                prints("YES");
            }
            else
            {
                 prints("NO");
            }
        }
    }
  return 0;
 }