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
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int x = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
               x = i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            v.push_back(v[i]);
        }
        int x2 = x+n;
        bool b1=true;
        for(int i=x;i<x2-1;i++)
        {
            if(v[i]>v[i+1])
            {
                b1 = false;
                break;
            }
        }
        bool b2 = true;
        for(int i=x2;i>x+1;i--)
        {
            if(v[i]>v[i-1])
            {
                b2 = false;
                break;
            }
        }
        if(b1 == true or b2 == true)
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