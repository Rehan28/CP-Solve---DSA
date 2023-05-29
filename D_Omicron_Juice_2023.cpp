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
    int t;
    cin>>t;
    int ii = 1;
    while(ii<=t)
    {
        int a,b,c,k;
        cin>>a>>b>>c>>k;
        int sum = a+b+c;
        if(sum%3)
        {
            cout<<"Case "<<ii<<": Fight"<<"\n";
        }
        else
        {
            bool ff = true;
            int x = abs(a-b);
            int y = abs(a-c);
            int z = abs(b-c);
            //cout<<k<<"\n";
            if((x%k and x!=0 and y%k and y!=0) or (x%k and x!=0 and z%k and z!=0 ) or (y%k and y!=0 and z%k and z!=0))
            {
                ff = false;
            }
           

            if(ff==true)
            {
                cout<<"Case "<<ii<<": Peaceful"<<"\n";
            }
            else
            {
               cout<<"Case "<<ii<<": Fight"<<"\n"; 
            }
            
        }
    ii++;
    }
   
  return 0;
 }

