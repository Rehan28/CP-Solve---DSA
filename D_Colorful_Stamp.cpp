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
        string s;
        cin>>s;
        s[n] = 'O';
        int R = 0;
        int B = 0;
        bool g = true;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='W' and i!=0)
            {
               for(;;i++)
               {
                if(s[i]!='W')
                {
                    i--;
                    break;
                }
               }
                if(R==0 or B==0)
                {
                    g = false;//dbg(R);
                    break;
                }
                else if(i!=(n-1))
                {   
                    R = 0;
                    B = 0;
                }
            }
            else
            {
                if(s[i]=='R')
                {
                    R++;
                }
                else if(s[i]=='B')
                {
                    B++;
                }
            }
        }
        if(R==0 or B==0)
        {
            g = false;
        }
        int h = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='W')
            {
                h++;
            }
            else
            {
                break;
            }
        }
        if(g or h==n)
        {
            prints("YES");
        }
        else
        {
            prints("NO");
        }
       
    }
  return 0;
 }