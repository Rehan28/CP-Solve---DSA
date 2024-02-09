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
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    cin(a,n);
    unordered_map<int, int> lmp;
    unordered_map<int, int> rmp;
    for (int i = 0; i < l;i++)
    {
        lmp[a[i]]++;
    }
    for (int i = l; i < n;i++)
    {
        rmp[a[i]]++;
    }
    int res = 0;
    for (int i = 0; i < n;i++)
    {
        int x = a[i];
        if(lmp[x]>0 and rmp[x]>0)
        {
            lmp[x]--;
            rmp[x]--;
            l--;
            r--;
        }
       
    }
    //dbg(res);
    int xx = min(l, r);
    res += xx;
    if(l>r)
    {
        l -= xx;
        int x = 0;
        int yy = 0;
        for (int i = 0; i < l;i++)
        { 
            if(lmp[a[i]]%2 and xx!=0)
            {
                lmp[a[i]]--;
                xx--;
            }
            else if(lmp[a[i]]%2==0)
            {
                x += lmp[a[i]] / 2;
                lmp[a[i]] = 0;
            }
            else if(lmp[a[i]]>2)
            {
                lmp[a[i]] -= 2;
                x++;
               // res++;
            }
        }
       
        x -= xx / 2;
        if(xx%2)
        {
            res++;
        }
        res += x;
        l -= (2 * x);
        res += l;
    }
    else
    {
        r -= xx;
        int x = 0;
        int yy = 0;
        for (int i = l; i < n;i++)
        {
            
            if(rmp[a[i]]%2 and xx!=0)
            {
                rmp[a[i]]--;
                xx--;
            }
            else if(rmp[a[i]]%2==0)
            {
                x += rmp[a[i]] / 2;
                rmp[a[i]] = 0;
            }
            else if(rmp[a[i]]>2)
            {
                rmp[a[i]] -= 2;
                x++;
                //res++;
            }
        }
        //dbg(xx);
        x -= xx / 2;
        if(xx%2)
        {
            res++; 
        }
        res += x;
        r -= (2 * x);
        res += r;
    }
    cout << res << "\n";
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