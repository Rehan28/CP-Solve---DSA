#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define no cout << "NO\n"
#define yes cout << "YES\n"
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
        int j = n-1;
        int c = 0;
        vector<int> v;
        for(int i=0;i<j;i++)
        {
            if(s[i]=='1')
            {
                for(;j>i;j--)
                {
                   
                    if(s[j]=='0')
                    {
                      
                        v.push_back(i+1);
                        v.push_back(j+1);
                        c +=2;
                        j--;
                       break;
                    } 
                }
                //dbg(j+1);
            }
        }
        if(c==0)
        {
            printi(0);
        }
        else
        {
            printi(1);
            sort(v.begin(),v.end());
            cout<<c<<" ";
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            nl;
        }
    }
  return 0;
 }