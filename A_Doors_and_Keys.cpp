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
       string s;
       cin>>s;
       int r[3];
       int R[3];
       for(int i=0;i<s.size();i++)
       {
        if(s[i]=='r')
        {
            r[0] = i; 
        }
        if(s[i]=='g')
        {
            r[1] = i; 
        }
        if(s[i]=='b')
        {
            r[2] = i; 
        }
        else if(s[i]=='R')
        {
            R[0] = i;
        }
        else if(s[i]=='G')
        {
            R[1] = i;
        }
        else if(s[i]=='B')
        {
            R[2] = i;
        }
       }
       bool b = true;
       for(int i=0;i<3;i++)
       {
        if(r[i]>R[i])
        {
            b = false;
        }
       }
       if(b)
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