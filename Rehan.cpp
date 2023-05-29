#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ord_set = tree<T,null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
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
    ord_set<int> st;
    for(int i=0;i<n;i++)
    {
        int ans = 0;
        if(i%2)
        {
            int x = i/2;
            int y = x+1;
            ans = *(st.find_by_order(x)) + *(st.find_by_order(y));
        }
        else
        {
           int x = (i+1)/2;
           ans = *(st.find_by_order(x));
        }
        cout<<ans<<"\n";
    }
}
int main()
{
    Muku28();
     int t = 0;
    cin>>t;
   while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    ord_set<int> st;
    for(int i=0;i<n;i++)
    {
        int ans = 0;
        if(i%2)
        {
            int x = i/2;
            int y = x+1;
            ans = *(st.find_by_order(x)) + *(st.find_by_order(y));
        }
        else
        {
           int x = (i+1)/2;
           ans = *(st.find_by_order(x));
        }
        cout<<ans<<"\n";
    }
    }
  return 0;
 }
