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
        string s;
        cin>>s;
        vector<pair< int ,bool>> p; 
        int x = s.size();
        for(int i=0;i<x-1;i++)
        {
            p.push_back(make_pair(1,false));
            int y = i;
            for(int j=i+1;j<x;j++)
            {
                dbg(j);
                if(s[i]>s[j])
                {
                    y = j;
                }
                
            }
            if(s[i] != '9')
            {
                s[i]++;
            }
            swap(s[i],s[i+1]);
            p[i].second = true;
        }
       cout<<s;
    }
  return 0;
 }