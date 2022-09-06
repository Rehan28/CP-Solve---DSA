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
int sum(int x)
{
    int sum = 1;
    for(int i=0;i<x;i++)
    {
        sum = sum * 10;
    }
    return sum;
}
//Muku28
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        string s;
        cin>>s;
       ll c = s.size() - 1;
       ll x = 0;
       ll a[c+1];
        for(int i=0;i<s.size();i++)
        {
           
            if(s[i]!='0')
            {
                ll y = s[i] - 48 ;
                //dbg(pow(10,c));
                a[x] = y * pow(10,c-i);
                 x++;
            }
        }
        printi(x);
        for(int i=0;i<x;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";        
    }
  return 0;
 }