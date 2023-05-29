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
    ll n,m,x;
    cin>>n>>m>>x;
    ll dis = n-1;
    long double div = (double)x/(double)m;
    //cout<<(int)div<<"\n";
    if(div>(double)dis or div<1.0)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
        ll gap = x%m;
        ll rehan = m-gap;
        ll number = x/m;
        ll f = 1; ll re = 0;
        ll sum = 1;
        while(gap>0)
        {
            if(f==1)
            {
                sum += number+1;
                cout<<sum<<" ";
                f = 0;
            }
            else{
                sum -= number-1;
                cout<<sum<<" ";
                f = 1;
            }
            gap--;
            re = 1;
        }
       
        while(rehan>0)
        {
            if(f==1)
            {
                sum +=number;
                //dbg(1);
                cout<<sum<<" ";
                f = 0;
            }
            else{
                if(re==1)
                {
                    sum -= number;
                    cout<<sum<<" ";
                f = 1;
                re = 0;
                }
                else
                {
                    sum -=number;
                    cout<<sum<<" ";
                f = 1;
                }
                
            }
            rehan--;
        }
    }
  return 0;
 }