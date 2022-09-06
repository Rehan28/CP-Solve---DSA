#include<bits/stdc++.h>
//muku28
using namespace std;typedef long long ll;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
//muku28
int main()
{
    muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
      
        ll high = (k*(b+1)-1);
        ll x = high + ((n-1)*(k-1));
        if(x<s || s < (k*b))
        {
           cout<<"-1";
        }
        else
        {
           if(high<s)
           {
            ll dif = s - high;
            ll store = dif/(k-1);
            if((dif%(k-1))!=0)
            {
                store ++;
            }
            //dbg(store);
            high = s - (store*(k-1));
            
           store++;
            for(int i=0;i<(n-store);i++)
            {
                cout<<"0 ";
            }
            store--;
            int y = 0;
            for(int i=n-2;y<store;i--)
            {
                cout<<(k-1)<<" ";
                y++;
            }
            cout<<high<<" ";
           }
           else if(high>s)
           {
             for(int i=0;i<n-1;i++)
             {
                cout<<0<<" ";
             }
             cout<<(s);
           }
           else
           {
            for(int i=0;i<n-1;i++)
             {
                cout<<0<<" ";
             }
             cout<<(high);
           }
        }
        cout<<"\n";
    }
  return 0;
 }