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
    
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        int a[n];
        cin(a,n);
        int res = 0;
        for(int i=0;i<n;i++)
        {
            int fas = i-x+1;
            int las = i+y+1;
            //dbg(fas);
           //dbg(las);
            
            if(fas<1 and las>n)
            {
                int b = *min_element(a,a+n);
                 //dbg(b);
                if(b==a[i])
                {
                    res = i+1;
                    break;
                }
            }
            else if(fas<1) 
            {
                int b = *min_element(a,a+las);
                //dbg(b);
                if(b==a[i])
                {
                    res = i+1;
                    break;
                }
            }
            else if(las>n)
            {
                int b = *min_element(a+fas-1,a+n);
                 //dbg(b);
                if(b==a[i])
                {
                    res = i+1;
                    break;
                }
            }
            
            else
            {
                int b = *min_element(a+fas-1,a+las);
                 //dbg(b);
                if(b==a[i])
                {
                    res = i+1;
                    break;
                }
            }
        }
        cout<<res<<"\n";
    
  return 0;
 }