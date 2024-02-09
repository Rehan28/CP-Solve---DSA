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
    int a[n][n];
    if(n==2)
    {
        cout << -1 << "\n";
        return 0;
    }
    // else if(n==1)
    // {
    //     cout << 1 << "\n";
    //     return 0;
    // }
    // else if(n==3)
    // {
    //     int x = n * n; 
    //     int y = n / 2;
    //     for (int i = 0; i < n;i++)
    //     {
    //         a[0][i] = x;
    //         x--;
    //         a[2][i] = x;
    //         x--;
    //     }
    //     a[0][0] = 1;
    //     a[1][0] = 3;
    //     a[1][1] = 9;
    //     a[1][2] = 2;
        
    // }
    // else
    // {
    //     int x = n * n; 
        
    //     int y = n / 2;
    //     for (int i = 0; i < n/2;i++)
    //     {
    //         for (int j = 0; j < n;j++)
    //         {
    //             a[i][j] = x;
    //             x--;
    //             a[y+i][j]= x;
    //             x--;
    //         }
    //     }
    //     if(n%2!=0)
    //     {
    //         for (int i = 0; i < n / 2;i++)
    //         {
    //             a[n-1][i] = x;
    //             x--;
    //             a[n-1][y + i+1] = x;
    //             x--;
    //         }
    //         a[n-1][y] = x;
    //     }
       
    // }
    int x = 1;
    for (int i = 1; i < n+1;i++)
    {
        for (int j = 1; j <= n;j++)
        {
            if((i+j)%2)
            {
                a[i - 1][j - 1] = x;
                x++;
            }
        }
    }
    for (int i = 1; i < n+1;i++)
    {
        for (int j = 1; j <= n;j++)
        {
            if((i+j)%2==0)
            {
                a[i - 1][j - 1] = x;
                x++;
            }
        }
    }
        // print
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            nl;
        }
    return 0;
}
//--------------28--------------//
int main()
{
    Muku28();
    int t = 1;
    cin>>t;
    while(t--)
    {
        Rehan();
    }
		return 0;
 }