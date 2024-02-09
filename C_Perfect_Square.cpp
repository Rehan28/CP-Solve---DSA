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
    char a[n][n];
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            cin >> a[i][j];
        }
    }
    int x = n - 1;
    int sum = 0;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            //dbg(i);
            if((i+1)<=n/2)
            {
                //cout << a[i][j] << " " << a[x-j][i]<<"\n";
                if(a[i][j]>=a[x-j][i])
                {
                    sum += int(a[i][j]-a[x - j][i]);
                    a[x - j][i] = a[i][j];
                }
                else
                {
                    sum += int(a[x - j][i]-a[i][j]);
                    a[i][j]=a[x - j][i];
                     //dbg(sum);
                }
            }
            else
            {
                int y = j + 1;
                if(j+1>x)
                {
                    y = 0;
                }
                if(a[i][j]>=a[y][i])
                {
                    sum += int((int)a[i][j]-(int)a[y][i]);
                    a[y][i] = a[i][j];
                }
                else
                {
                    //dbg(sum);
                    sum += int(a[y][i]-a[i][j]);
                    a[i][j]=a[y][i];
                     //dbg(sum);
                }
            }
        }
    }
    cout << sum << "\n";

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