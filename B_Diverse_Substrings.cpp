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
        string s;
        cin>>s;
        int y = n*n;
        int x = 0;
        string s1[y];
        y = 0;
        for (int i = 2;i<=n;i++)
        {
            for (int j = 0;j<=n-i; j++)
            {
            x = j + i - 1;           
            for (int k = j;k<=x;k++)
            {
                s1[y] += s[k];
            }
             y++;
            }
           
        }
        int res =n;
        for(int i=0;i<y;i++)
        {
            cout<<s1[i]<<"\n";
        }
        
    }
  return 0;
 }