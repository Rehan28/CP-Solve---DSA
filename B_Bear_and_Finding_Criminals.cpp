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
#define cin(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(v) v.begin(),v.end()
#define nl cout<<"\n";
//Muku28
int main()
{
    Muku28();
    int n,k;
    cin>>n>>k;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        a.push_back(v);
    }
    int c = 0;
    int i = 0;
    while(i<n)
    {
        int x = k+i-1;
        int y = k-i-1;
        //dbg(x);
        //dbg(y);
        if(x==k-1 and a[x]==1)
        {
            c++;
        }
        else if(a[x]==1 and a[y] == 1 )
        {
            c +=2;
        }
        else if(a[x] ==1 and (y<0 or y>n-1))
        {
            c++;
        }
        else if(a[y] == 1 and (x<0 or x>n-1))
        {
            c++;
        }
        i++;
    }
    cout<<c<<"\n";
  return 0;
 }