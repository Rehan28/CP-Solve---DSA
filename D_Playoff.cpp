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
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "No\n"
#define yes cout << "Yes\n"
 
#define nl cout<<"\n";
//Muku28
int main()
{
    Muku28();
    ll n;
    cin>>n;
    string s;
    cin>>s;
     int c = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
    }
    //s = "001";
    string rehan;
     string rehan1;
    for(int i=0;i<n;i++)
    {
       rehan+='0';
       rehan1+='1';
    }
    vector<string> ss;
    //ss.push_back(rehan);
    //ss.push_back(rehan1);
   
    sort(s.begin(),s.end());
    do {
      ss.push_back(s);
      //cout<<s<<"\n";
    } while (next_permutation(s.begin(),s.end()));
   vector<ll> v;
   string st;
   if(c>0 and c!=n)
   {
     for(int i=0;i<n-1;i++)
      {
         st += '0';
      }
   st += '1';
   ss.push_back(st);
   }
  
    for(int i=0;i<ss.size();i++)
    {
        //cout<<ss[i]<<"\n";
        ll tar;ll tar1;
       if(ss[i][0]=='1')
        {
         tar = 2;
        
         ll ran = 0;
          for(int j=1;j<n;j++)
           {
            ran++;
            if(ss[i][j]=='1')
            {
               
                tar += 2*ran;
            }
           
          }
          v.push_back(tar);
        }
        else
        {
          tar = 1;
          ll ran = 0;
          for(int j=1;j<n;j++)
           {
            ran++;
            if(ss[i][j]=='1')
            {
                
                tar += 2*ran;
            }
           
         }
          v.push_back(tar);
        }
    }
    sort(v.begin(),v.end());
    //ll pp = unique(v.begin(), v.begin());
    //cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=v[i+1] or i==(v.size()-1))
        {
            cout<<v[i]<<" ";
        }
        
    }
    nl;
  return 0;
 }
 