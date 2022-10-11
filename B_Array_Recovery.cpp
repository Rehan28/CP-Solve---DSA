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
        int d[n];
        cin(d,n);
        int a[n];
        a[0] = d[0];
        bool b = true;
        for(int i=1;i<n;i++)
        {
            int x = d[i-1] - d[i];
            if(x>=0 and d[i]!=0)
            {
               b = false;
               break;
            }
            else
            {
                a[i] = a[i-1] + d[i];
                //dbg(a[i]);
                d[i] = a[i];
            }
        }
        if(b)
        {
            for(int i=0;i<n;i++)
             {
            cout<<a[i]<<" ";
             }
        }
        else
        {
             cout<<-1;
               
        }
        nl;  
    }
  return 0;
 }