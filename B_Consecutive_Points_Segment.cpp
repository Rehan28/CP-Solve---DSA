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
        int two = 0;
        int three = 0;
        bool f = false;
        for(int i=0;i<n-1;i++)
        {
            int x = a[i+1]-a[i];
            if(x==1)
            {
                continue;
            }
            else if(x==2)
            {
                two++;
            }
            else if(x==3)
            {
                three++;
            }
            else
            {
               f = true;
               break;
            }
        }
        if(f)
        {
            cout<<"NO"<<"\n";
        }
        else if(three == 0 and two==0)
        {
             cout<<"YES"<<"\n";
        }
        else if(three==1 and two==0)
        {
            cout<<"YES"<<"\n";
        }
        else if(two<3 and three==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
  return 0;
 }