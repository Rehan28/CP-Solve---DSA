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
void Rehan()
{
    int n;
    cin>>n;
    string s, ss;
    cin >> s >> ss;
    int ulta = 0;
    int j = n - 1;
    for (int i = 0; i < n;i++)
    {
        if(s[i]!=ss[j])
        {
            ulta++;
        }
        j--;
    }
    int soja = 0;
    for (int i = 0; i < n;i++)
    {
        if(s[i]!=ss[i])
        {
            soja++;
        }
    }
    if(soja!=1)
    {
        if(soja%2)
        {
            soja += (soja - 1);
        }
        else
        {
            soja += soja;
        }
    }
   
    if(ulta == 0)
    {
        ulta = 2;
    }
    else if(ulta%2)
    {
        ulta += ulta;
    } 
    else{ 
        //dbg(ulta);
        ulta += (ulta-1);
    }
    // dbg(ulta);
    // dbg(soja);
    cout << min(ulta, soja) << "\n";
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