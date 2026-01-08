#include<bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define int long long int
#define dec greater<int>()
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (auto &x : a){
        cin >> x;
        if (x >1e16) cout<<"Baler test case\n"; // Ensure non-negative values
    }

    for (auto &y : b)
        cin >> y;

    auto check=[&](vector<int>&x){
        for(int i=0; i<n; i++){
            int mx=max_element(x.begin()+i,x.end())-x.begin();
            swap(x[i],x[mx]);

            if(x[i]==0)break;
            for(int j=0; j<n; j++){
                if(j==i)continue;
                x[j]=min(x[j],x[i]^x[j]);
            }
        }
    };
    check(a);
    check(b);
    
    cout<< (a == b ? "Yes" : "No") << "\n";
}
 
signed main()
{
    fast;    
    int t=1;
    //cin>>t;
    while(t--)
      solve();
}