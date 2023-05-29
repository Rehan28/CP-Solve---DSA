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
        map<int,int> mpone;
        map<int,int> mpzero;
        string s[n];
   // cout<<mpone[1]<<"\n";
        for(int i=0;i<n;i++)
        {
            
         cin>>s[i];
            
        }
        int x = 0;
        //0
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i][j]=='0')
                {
                 mpzero[x]++;
                }
                else
                {
                  mpone[x]++;
                }
                x++;
            }
        }
        //180
        x = 0;
        for(int i=n-1;i>-1;i--)
        {
            for(int j=n-1;j>-1;j--)
            {
                //cout<<s[i][j];
                if(s[i][j]=='0')
                {
                 mpzero[x]++;
                }
                else
                {
                  mpone[x]++;
                }
                x++;
            }
           // nl;
        }
        //nl;
        //90
        x = 0;
        for(int i=n-1;i>-1;i--)
        {
            for(int j=0;j<n;j++)
            {
                //cout<<s[j][i];
                if(s[j][i]=='0')
                {
                 mpzero[x]++;
                }
                else
                {
                  mpone[x]++;
                }
                x++;
            }
            //nl;
        }
        //nl;
        //270
         x = 0;
         for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>-1;j--)
            {
                //cout<<s[j][i];
                if(s[j][i]=='0')
                {
                 mpzero[x]++;
                 //cout<<mpzero[x]<<" "<<x<<"\n";
                }
                else
                {
                  mpone[x]++;
                  //cout<<mpone[x]<<" "<<x<<"\n";
                }
                x++;
               
            }
            //nl;
        }
        
        //dbg(x);
        int count = 0;
        for(int i=0;i<x;i++)
        {
           int y = min(mpone[i],mpzero[i]);
           //cout<<mpone[i]<<" "<<mpzero[i]<<" "<<i<<"\n";
           count += y;
        }
        //cout<<mpone[0]<<"\n";
        count = count/4;
        cout<<count<<"\n";
    }
  return 0;
 }