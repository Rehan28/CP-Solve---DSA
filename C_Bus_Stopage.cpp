#include<bits/stdc++.h>

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

int main()
{
    Muku28();
     int t;
    cin>>t;
    int i = 1;
   while(i<=t)
    {
        int n;
        cin>>n;
        n--;
        int a[n],b[n];
        int sum = 0;
        int x =0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            sum = sum + a[i] - b[i];
            if(sum>x)
            {
                x = sum;
            }
        }
        cout<<"Case "<<i<<": "<<x<<"\n";
        i++;
    }
  return 0;
 }