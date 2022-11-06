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
        cinv(v,n);
        
        sort(v.begin(),v.end());
        int gen = n;
        
       while(n>=0)
       {
        vector<int> v1 = v;
                bool b = true;
                int x = -1;
                int y = gen-1;  
        for(int i=n;i>0;i--)
        { 
            
           bool present = true;
           for(int j=y;j>x;j--)
           {
            if(v1[j]<=i)
            {
                present = false;
                y = j-1;
                //dbg(y);
                x++;
               // dbg(x);
                break;
            }
           }
           if(present)
           {
            break;
           }
           if(i==1)
           {
            b = false;
           }
        }
        if(b==false or n==0)
        {
            break;
        }
        n--;
       }
       cout<<n<<"\n";

    }
  return 0;
 }