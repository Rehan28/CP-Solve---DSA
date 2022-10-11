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
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n,greater<int>());
    int j = n-1;
    int x = 1;
    int y = 0;
    int pos = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == b[pos])
        {
            for(int h=y;h<x;h++)
            {
                cout<<b[h]<<" ";
                y++;
                pos = h;
            }
            pos++;
            x++;
            nl;
        }
        else
        {
            x++;
            cout<<"\n";
        }
        //dbg(x);
        //dbg(y);
    }
  return 0;
 }