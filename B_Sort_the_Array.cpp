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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
     for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    int x=-1;
    int y = -1;
    sort(b,b+n);

    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            x = i;
            break;
        }
    }
    for(int i=n-1;i>-1;i--)
    {
        if(a[i]!=b[i])
        {
            y = i;
            break;
        }
    }
    if(x==-1 or y==-1)
    {
        prints("yes");
        cout<<"1 1"<<"\n";
    }
    else
    { 
        reverse(a + x, a + y + 1);
        /*dbg(x);
        dbg(y);
       
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        nl;*/
        bool f = true;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                f = false;
            }
        }
        if(f)
        {
            prints("yes");
            cout<<x+1<<" "<<y+1<<"\n";
        }
        else
        {
            prints("no");
        }
    }
   
  return 0;
 }