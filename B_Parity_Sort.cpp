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
    int a[n];
    cin(a,n);
    vector<int> even;
    vector<int> odd;
    map<int, int> dd;

    for (int i = 0; i < n;i++)
    {
        if(a[i]%2)
        {
            dd[i] = 1;
            odd.push_back(a[i]);
        }
        else
        {
            even.push_back(a[i]);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    reverse(even.begin(), even.end());
    reverse(odd.begin(), odd.end());
    for (int i = 0; i < n;i++)
    {
        if(dd[i]==1)
        {
            a[i] = odd[odd.size() - 1]; 
           
            odd.pop_back();
        }
        else
        {
            a[i] = even[even.size() - 1];
            even.pop_back();
        }
    }
    bool f = true;
    for (int i = 0; i < n-1;i++)
    {
        //cout << a[i] << "\n";
        if(a[i]>a[i+1])
        {
            f = false;
        }
    }
    if(f)
    {
        yes;
    }
    else
    {
        no;
    }
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