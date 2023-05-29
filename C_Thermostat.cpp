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
        int l,r,n,a,b;
        cin>>l>>r>>n;
        cin>>a>>b;
        int x = abs(a-l);
        int y = abs(b-r);
       
        if(a==b)
        {
            cout<<0<<"\n";
        }
        else
        {
            int dif = b-a;
            int x = abs(a-l);
            int y = abs(b-r);
            //dif = x - dif;
            int point = dif + n;
            int point1 = x+y;
            //dbg(point);
            if(n==1)
            {
                cout<<1<<"\n";
            }
            else if(point<=(y-a))
            {
                cout<<2<<"\n";
            }
            else if(point1<=y)
            {
                cout<<3<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }

        }

    }
  return 0;
 }