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
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//Muku28
int Rehan()
{
    int n;
    cin>>n;
    int a[n-1];
    cin(a,n-1);
    int c[n];
    c[0] = 0;
    for (int i = 1; i < n;i++)
    {
        c[i] = c[i - 1] ^ a[i - 1];
    }
    for (int i = 0; i < 32;i++)
    {
        int one = 0;
        int zero = 0;
        for (int j = 0; j < n;j++)
        {
            if((c[j] & (1<<i))!=0)
            {
                //cout << i << " " << c[j] << "\n";
                one++;
            }
            else
            {
                zero++;
            }
        }
        //cout <<i<<" " zero << " " << one << "\n";
        if(one>zero)
        {
            //dbg(i);
            for (int j = 0; j < n; j++)
            {
                if((c[j] & (1<<i))!=0)
                {
                    c[j] = (c[j] & ~(1 << i));
                }
                else
                {
                    c[j] = (c[j] | 1 << i);
                }
            } 
        }
    }
    for (int i = 0; i < n;i++)
    {
        cout << c[i] << " ";
    }
    nl;
    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }