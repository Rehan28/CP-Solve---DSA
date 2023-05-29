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
     ll t;
    cin>>t;
    ll sum = 0;
    for(ll i=1;i<=t;i++)
    {
        sum += i;
    }
    ll a[t+1] = {0};
    
    if(sum%2==0)
    {
        cout<<"YES"<<"\n";
        sum = sum/2;
        //cout<<sum<<"\n";
        int x = 0;
        for(ll i=t;i>-1;i--)
        {
            sum -= i;
            //cout<<sum<<"\n";
            if(sum>0)
            {
                a[i] = 1;
                x++;
            }
            else
            {
                x++;
                sum += i;
                a[sum] = 1;
                break;
            }
        }
        cout<<x<<"\n";
        for(ll i=1;i<=t;i++)
        {
            if(a[i]==1)
            {
                cout<<i<<" ";
            }
        }
        nl;
        x = t-x;
        cout<<x<<"\n";
         for(ll i=1;i<=t;i++)
        {
            if(a[i]!=1)
            {
                cout<<i<<" ";
            }
        }
        nl;

    }
    else
    {
         cout<<"NO"<<"\n";
    }
     

  return 0;
 }