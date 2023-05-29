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


ll Graph[1000][1000] = {0};
ll vertices,edges;
void input()
{ 
    ll u,v;
   
    cin>>vertices>>edges; 

   for(int i=0;i<edges;i++)
    {
    cin>>u>>v;
    Graph[u][v] = 1;
    
    }
}
void output()
{
    cout<<"Graph is ::\n";
    for(int i=1;i<=vertices;i++)
    {
    for(int j=1;j<=vertices;j++)
    {
        cout<<Graph[i][j]<<" ";
    }
    nl;
 }
}
int main()
{
    
    input();
    output();
    return 0;
}