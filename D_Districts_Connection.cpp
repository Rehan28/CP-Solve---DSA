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
    int a[n];
    cin(a,n);
    vector<pair<int, int>> vp;
    set<int> st;
    for (int i = 0; i < n;i++)
    {
        vp.push_back(make_pair(a[i], i + 1));
        st.insert(a[i]);
    }
    if(st.size()==1)
    {
        no;
    }
    else
    {
        yes;
        int x = n-1;
        sort(vp.begin(), vp.end());
        for (int i = 0; i < n-1;i++)
        {
            for (int j = i+1; j < n;j++)
            {
                if(vp[i].first!=vp[j].first)
                {
                    cout << vp[i].second << " " << vp[j].second << "\n";
                    x--;
                    if(x==0)
                    {
                        break;
                    }
                }
            }
            if(x==0)
            {
                break;
            }
        }
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
 