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
    ll n,m,k,t;
    cin>>n>>m>>k>>t;
    ll a[k];
    for(ll i=0;i<k;i++)
    {
        int x,y;
        cin>>x>>y;
        a[i] = ((x-1)*m) + y ;
    }

    sort(a,a+k);

    for(ll i=0;i<t;i++)
    {
        ll x,y;
        cin>>x>>y;
        x--;
        ll position = (x*m) + y;
        //cout<<position<<"\n";
        ll j = k-1;
        while(j>=0 and a[j]>position)
        {
            j--;
        }
        //cout<<j<<"\n";

        ll res = position - (j +1) ;

        if(a[j]==position)
        {
            prints("Waste");
        }
        else if(res%3 == 1)
        {
            prints("Carrots");
        }
        else if(res%3 == 2)
        {
            prints("Kiwis");
        }
        else if(res%3 == 0)
        {
            prints("Grapes");
        }
        
    }

  return 0;
 }