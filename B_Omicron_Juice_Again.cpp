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
    int i = 1;
   while(i<=t)
    {
        
        int a[3],k;
        cin(a,3);
        cin>>k;
        sort(a,a+3);
        int sum = a[0] + a[1] + a[2];
        if(sum%3==0)
        {
            int c = 0;

          int x = sum/3;

          while(1)
          {
            if(a[2]<k)
            {
                break;
            }
            if(a[0]==x)
            {
                c++;
                break;
            }
            if(a[0]>x)
            {
               // a[2] = a[2] + k;
               break;
            }
            a[0] = a[0] + k;
            a[2] = a[2] - k;
            
          }
          if(a[1]>x)
          {
            while(1)
          {
            
            if(a[0]==x)
            {
                c++;
                break;
            }
            if(a[0]>x)
            {
               // a[2] = a[2] + k;
               break;
            }
            a[0] = a[0] + k;
            a[1] = a[1] - k;
            
          }
          }
          while(1)
          {
            if(a[2]<k)
            {
                break;
            }
            if(a[1]==x)
            {
                c++;
                break;
            }
            if(a[1]>x)
            {
                //a[2] = a[2] + k;
                break;
            }
            a[1] = a[1] + k;
            a[2] = a[2] - k;
            
          }
          if(c==2)
          {
             cout<<"Case "<<i<<": Peaceful"<<"\n";
          }
          else
          {
            cout<<"Case "<<i<<": Fight"<<"\n";
          }
        }
        else
        {
            cout<<"Case "<<i<<": Fight"<<"\n";
        }
       
        i++;
    }
  return 0;
 }