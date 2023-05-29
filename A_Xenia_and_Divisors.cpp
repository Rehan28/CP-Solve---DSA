#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 10e9 + 7;
//Muku28
int main()
{
    Muku28();
   int n;
   cin>>n;
   int a[n];
   cin(a,n);
   map<int,int> mp;
   for(int  i=0;i<n;i++)
   {
    mp[a[i]]++;
   }
   n = n/3;
   int b[n][3];
   int x = 1;
   if(mp[1]==n and (mp[2]+mp[3])==n and (mp[4]+mp[6])==n and mp[3]<=mp[6])
   {
     for(int i=0;i<n;i++)
     {
        cout<<1<<" ";
        if(mp[2]!=0)
        {
            cout<<2<<" ";
            mp[2]--;
            if(mp[4]!=0)
            {
                cout<<4<<" ";
                mp[4]--;
            }
            else
            {
                cout<<6<<" ";
                //mp[4]--;
            }
        }
        else
        {
            cout<<3<<" ";
            cout<<6<<" ";
        }
         nl;
     }
   
   }
   else
   {
    printi(-1); 
   }
  return 0;
 }