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
        ll n,q;
        cin>>n>>q;
        ll a[n];
        cin(a,n);
        ll pfx[n];
        pfx[0] = a[0];
        for(int i=1;i<n;i++)
        {
            pfx[i] = pfx[i-1] + a[i];
            //cout<<pfx[i];
        }
        vector<pair<int,int>> p;
        for(int i=0;i<q;i++)
        {
            int input;
            cin>>input;
            p.push_back(make_pair(input,i));
        }
        sort(p.begin(),p.end());
        int x = 0;
        ll b[q] = {0};
        //cout<<p[2].second;
        for(int i=0;i<q;i++)
        { 
            bool g = true;
            int term = p[i].second;
            //dbg(term);
            for(int j=x;j<n;j++)
            {
               if(a[j]>p[i].first)
                {
                    if(j==0)
                    {
                        g = false;
                        b[term] = 0;
                        break;
                    }
                    b[term] = pfx[j-1];
                    x=j-1;
                    g = false;
                    break;
                }
            }
             //x++;
            if(g)
            {
                b[term] = pfx[n-1];
            }
        }
        for(int i=0;i<q;i++)
        {
            cout<<b[i]<<" ";
        }
        nl;
    }
  return 0;
 }