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
        int n,s;
        cin>>n>>s;
        int a[n];
        cin(a,n);
        int c = 0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                c++;
            }
        }
        if(c<s)
        {
            printi(-1);
        }
        else
        {
            int res = 0;
            int f = 0;
            int l = n-1;
            while(c>s)
            {
            int c1 = 0;
            int c2 = 0;
            int lastf = f;
            int lastl = l;
            for(int i=f;i<(n/2)+1;i++)
            {
                c1++;
                if(a[i]==1)
                {
                    f = i;
                    break;
                }
            }
            for(int i=l;i>(n/2)-1;i--)
            {
                c2++;
                if(a[i]==1)
                {
                    l = i;
                    break;
                }
            }
            //c1 = max(1,0)
            ///
            if(c1<=c2)
            {
                res += c1;
                l = lastl;
                f++;
            }
            else
            {
                res += c2;
                f = lastf;
                l--;
            }
            c--;
         }
         cout<<res<<"\n";
            
        }
    }
  return 0;
 }