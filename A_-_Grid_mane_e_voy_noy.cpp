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
        int n,m;
        cin>>n,m;
        
        
        string s1[n];
        string s2[n];
        int d[m] = {0};
        int x = 0;
       for(int i=0;i<n;i++)
       {    string s;
            cin>>s;
            int count = 0;
            for(int j=0;j<m;j++)
            {
                if(s[j] == '.')
                {
                    d[j]++;
                    count++;
                }
            }
            if(count != m)
            {
                s1[x] = s;
                cout<<s1[i]<<"\n";
                x++;
            }
       }
       
    
    
  return 0;
 }