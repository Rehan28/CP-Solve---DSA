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
    cin>>n>>m;
    char rehan;
    cin>>rehan;
    char c[n][m];
    set<char> s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[i][j];
            
        }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
         if(c[i][j]==rehan)
            {
               
               if(i!=0)
               {
                 if(c[i-1][j]!='.' and c[i-1][j]!= rehan)
                 {
                   s.insert(c[i-1][j]);
                 }
               }
              
               if(i!=n-1)
               {
                if(c[i+1][j]!='.' and c[i+1][j]!= rehan)
                 {
                    s.insert(c[i+1][j]);
                 }
               }

               if(j!=0)
               {
                  
                  //cout<<rehan<<" ";
                 if((c[i][j-1] != '.') and  (c[i][j-1]!=rehan))
                 {
                     s.insert(c[i][j-1]);
                 }
               }

               if(j!=(m-1))
               {
                  //cout<<c[i][j+1]<<" ";
                 if(c[i][j+1] != '.' and c[i][j+1] != rehan)
                 {
                    s.insert(c[i][j+1]);
                 }
               }// dbg(sum);
            }
            
      }
    }
    cout<<s.size()<<"\n";
  return 0;
 }