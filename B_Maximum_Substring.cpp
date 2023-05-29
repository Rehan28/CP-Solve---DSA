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
        s += '2';
        ll one = 0;
        ll zero = 0;
        int x = 0;
        ll sum = 0;
        ll sum1 = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        ll sum3 = one*zero;
        one = 0;
        zero = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else{
                zero++;
            }
            if(s[i+1]=='2')
            {
                if(one>0)
                {
                    if(one>sum)
                    {
                      sum = one;
                    }
                }
                else
                {
                    if(zero>sum1)
                    {
                    sum1 = zero;
                    }
                }
            }
            else if(s[i]!=s[i+1])
            {
                if(one>sum)
                {
                    sum = one;
                }
                if(zero>sum1)
                {
                    sum1 = zero;
                }
                one = 0;
                zero = 0;
            }  
            
        }
        cout<<max(sum3,(max(sum1,sum)*max(sum1,sum)))<<"\n";
        
       
    }
  return 0;
 }