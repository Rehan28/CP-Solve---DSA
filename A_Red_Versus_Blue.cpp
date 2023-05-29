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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        
            int x = a/(b+1);
            //cout<<x<<"\n  ";
            int xx = a%(b+1);
            int c = 0;
            for(int i=0;i<n;i++)
            {
                if(c==x and b!=0)
                {
                    s += 'B';
                    c = 0;
                    b--;
                }
                else
                {
                    s += 'R';
                    if(xx!=0 and c==0)
                    {
                        s+='R';
                        xx--;
                        n--;
                    }
                    c++;
                }
                
            }
        
       
        
        cout<<s<<"\n";
       //cout<<s.size()<<"\n";
        
        
    }
  return 0;
 }