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
    string s,s1;
    cin>>s>>s1;
    int sh1 = stoi(s)*60;
    int sm = (int)(s[3])-48;
    sm = (sm*10) + (int)(s[4])-48;
    sm = sh1+sm;

    int sh2 = stoi(s1)*60;
    int sm1 = (int)(s1[3])-48;
    sm1 = (sm1*10) + (int)(s1[4])-48;
    sm1 = sh2+sm1;

    int fi = (sm1+sm)/2;
    if(fi/60<10)
    {
        cout<<0;
    }
    cout<<fi/60<<":";
    if(fi%60<10)
    {
        cout<<0;
    }
    cout<<fi%60<<"\n";

  return 0;
 }