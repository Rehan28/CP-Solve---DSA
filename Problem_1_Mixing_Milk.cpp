#include<bits/stdc++.h>
/* 
ID: your id 
LANG: C++17
PROB: Problem 1. Fence Painting
*/
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
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

//Muku28
int main()
{
    //setIO("mixmilk");
   // Muku28();
   int a[3],b[3];
   
   for(int i=0;i<3;i++)
   {
    cin>>a[i]>>b[i];
    //c[i] = b[i];
    
   }
   int x = 0;
    for(int i=0;i<100;i++)
    {
        x++;
        //dbg(x);
        if(x==1)
        {
            int y = min()
            if(b[0]>(a[1]-b[1]))
            {
                b[0] = b[0] - a[1] - b[1];
                b[1] = a[1]; 
            }
            else
            {
                b[1] = b[1] + b[0];
                b[0] = 0;
            }
        }
        if(x==2)
        {
            if(b[1]>(a[2]-b[2]))
            {
                b[1] = b[1] - a[2] - b[2];
                b[2] = a[2];
            }
            else
            {
                b[2] = b[2] + b[1];
                b[1] = 0;
            }
        }
        if(x==3)
        {
            if(b[2]>(a[0]-b[0]))
            {
                b[2] = b[2] - a[0] - b[0];
                b[0] = a[0];
            }
            else
            {
                b[0] = b[0] + b[2];
                b[2] = 0;
            }
            x = 0;
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<b[i]<<"\n";
    }

  return 0;
 }