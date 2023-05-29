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
ll mod = 10e9 + 7;
//Muku28
int main()
{
    Muku28();
    int n = 5;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int fact = 120;
    int b[5] = {0,1,2,3,4};
    int res = INT_MIN;
    for(int i=0;i<=fact;i++)
    {
        int one,two,three,four,five;
        one = a[b[0]][b[1]] + a[b[1]][b[0]];
        two = a[b[1]][b[2]] + a[b[2]][b[1]];
        three = a[b[2]][b[3]] + a[b[3]][b[2]];
        four = a[b[3]][b[4]] + a[b[4]][b[3]];
        int sum = 0;
        sum = (one + two + (2*(three)) + (2*four));
        if(sum>res)
        {
            res = sum;
        }
        next_permutation(b,b+n);

    }
    cout<<res<<"\n";
  return 0;
 }