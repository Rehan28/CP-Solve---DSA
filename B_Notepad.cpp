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
       vector<string> vs;
       vector<int> v;
       for(int i=0;i<n-1;i++)
       {
         string ss ;
         ss += s[i];
         ss += s[i+1];
         //cout<<ss<<"\n";
         vs.push_back(ss);
         v.push_back(i);
       }
       int c = 0;
       for(int i=0;i<n-2;i++)
       {
        for(int j=i+1;j<n-1;j++)
        {
            if(vs[i]==vs[j] and (v[j]-v[i])>1)
            {
                c = 1;
                break;
            }
        }
       }
       
       
       if(c==1)
       {
        prints("YES");
       }
       else
       {
        prints("NO");
       }
    }
  return 0;
 }