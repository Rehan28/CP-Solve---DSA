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
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        cin(a,n);
        int b[n];
        cin(b,n);
        bool f = true;
        vector<pair<int,int>> p;
        for(int i=0;i<n-1;i++)
        {
           for(int j=i+1;j<n;j++)
           {
                if(a[i]>a[j])
                {
                    p.push_back(make_pair(i+1,j+1));
                    if(b[i]<b[j])
                    {
                       f = false;
                    } 
                    swap(a[i],a[j]);
                    swap(b[i],b[j]);
                }
                else if(b[i]>b[j])
                {
                    p.push_back(make_pair(i+1,j+1));
                    if(a[i]<a[j])
                    {
                       f = false;
                    } 
                    swap(a[i],a[j]);
                    swap(b[i],b[j]);
                    
                }
           }
        }
        if(f)
        {
            int x = p.size();
            printi(x);
            for(int i=0;i<x;i++)
            {
                cout<<p[i].first<<" "<<p[i].second<<"\n";
            }
        }
        else
        {
            printi(-1);
        }
    }
  return 0;
 }