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
        int n;
        cin>>n;
        ll a[n];
        ll co = 0;
        ll c1 = 0;
        vector<pair<int,int>> pv;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           
            if(a[i] == 0)
            {
                co++;
            }
            else
            {
                c1++;
            }
        }
        ll b[n];
        cin(b,n);
        ll sum = 0;
        if(co==c1)
        {
            sort(b,b+n);
            sum +=b[0];
            for(int i=1;i<n;i++)
            {
                sum += 2*b[i];
            }
            cout<<sum<<"\n";
        }
        else if(co==0 or c1 == 0)
        {
            for(int i=0;i<n;i++)
            {
                sum += b[i];
            }
            cout<<sum<<"\n";
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                 pv.push_back(make_pair(a[i],b[i]));
            }
            sort(pv.begin(),pv.end());
            int x;
            int y;
            if(co>c1)
            {
                x = 1;
                y = c1;
            }
            else
            {
                x = 0;
                y = co;
            }
           
            for(int i=n-1;i>-1;i--)
            {
                if(pv[i].first==x)
                {
                    sum += 2*pv[i].second;
                }
                else
                {
                    if(y!=0)
                    {
                        sum += 2*pv[i].second;
                        y--;
                    }
                    else
                    {
                        sum += b[i];
                    }
                }
            }
            cout<<sum<<"\n";
            
        }
    }
  return 0;
 }