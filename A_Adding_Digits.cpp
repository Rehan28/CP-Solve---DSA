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
ll mod = 1e9 + 7;
//Muku28
int main()
{
    Muku28();
    string a;
    int b,n;
    cin>>a>>b>>n;
    int y = a.size() + n;
    bool f = false;
    int res;
    for(int i=0;i<n-1;i++)
    {
        a += ('0');
    }
    //cout<<y<<"\n";
    for(int i=0;i<10;i++)
    {
        a [y-1]= (char)(48 + i);
        int x = stoi(a);
        if(x%b==0)
        {
            res = x;
            f = true;
            break;
        }
    }
    if(f)
    {
        cout<<res<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
    
  return 0;
 }