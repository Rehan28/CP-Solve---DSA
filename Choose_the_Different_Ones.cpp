#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define all(x) x.begin(), x.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

//Muku28
int Rehan(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    cin(a,n);
    int b[m];
    cin(b, m);
    map<int, int> mp;
    map<int, int> mp1;
    set<int> st;
    set<int> st1;
    for (int i = 0; i < n;i++)
    {
        if(a[i]<=k)
        {
            st.insert(a[i]);
            mp[a[i]]++;
        }
    }
    for (int i = 0; i < m;i++)
    {
        if(b[i]<=k)
        {
            st1.insert(b[i]);
            mp1[b[i]]++;
        }
    }
    int x = k / 2;
    int c = st.size();
    int c1 = st1.size();
    if(c<x or c1<x)
    {
        no;
    }
    else
    {
        int aa = 0;
        int bb = 0;
        int f[k + 1] = {0};
        for (int i = 1; i <= k;i++)
        {
            if(mp[i]==0 and mp1[i]!=0 and bb<x)
            {
                bb++;
                f[i] = 1;
            }
            else if(mp1[i]==0 and mp[i]!=0 and aa<x){
                aa++;
                f[i] = 1;
            }
            
        }
        for (int i = 1; i <= k;i++)
        {
            if(f[i]==0)
            {
                if(mp[i]==0 and mp1[i]==0)
                {
                    break;
                }
                else if(aa<=bb)
                {
                    aa++;
                }
                else 
                {
                    bb++;
                }
            }
        }
            if (aa == x and bb == x)
            {
                yes;
            }
            else{
            no;
        }
        
    }

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }