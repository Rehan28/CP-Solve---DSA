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
        int a[n+1]={-1};
        cin(a,n);
       bool b = true;
        vector<pair<int,int>> p;
        int x = 0;
        int y = 0;
        for(int i=0;i<n;i++)
        {
            y++;
            if(a[i]!=a[i+1] or i==n-1)
            {
                if(y==1)
                {
                  b = false;
                  break;
                }
                int t = i+1;
               p.push_back(make_pair(x,t));
                x = i+1;
                y=0;
            }
            
            //cout<<y<<"\n";
        }
         //cout<<p.size()<<"\n";
        if(b)
        {
            
            for(int i=0;i<p.size();i++)
            {
                int st = p[i].first;
                int end = p[i].second;
                cout<<end<<" ";
                for(int j=st;j<end-1;j++)
                {
                    cout<<j+1<<" ";
                }
            }
            nl;
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
  return 0;
 }