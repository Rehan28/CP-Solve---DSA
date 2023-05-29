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
        int a[n];
        cin(a,n);
        bool b = false;
        int c = 0;
        int x = n-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                for(int j=x;j>i;j--)
                {
                    if(a[j]==0)
                    {
                        swap(a[i],a[j]);
                        //dbg(i);
                        //dbg(j);
                        c++;
                        x = j-1;
                        break;
                    }
                    if(i==j)
                    {
                        b = true;
                        break;
                    }
                }
            }
            if(b)
            {
                break;
            }
        }
        cout<<c<<"\n";
    }
  return 0;
 }