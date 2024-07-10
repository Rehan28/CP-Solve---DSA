#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
//cout << "Case " << test << ": ";
//Muku28
int Rehan(int test) {
    int n,m,d;
    cin>>n>>m>>d;
    set<int> st;
    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < n;i++){
        int a;
        cin >> a;
        st.insert(a);
        v.push_back(a);
        //mp[a] = i+1;
    }

    int num = m / d;
    int ans = 0;
    while (st.size()){
        int y = num+1;
        auto f = st.begin();
        int x = *f;
        while (y--){ 
            st.erase(x);
            //cout << x<< " ";
            mp[x] = ans+1;
            x += d+1;
            auto it = st.lower_bound(x);
            x = *it;
            if(it==st.end()){
                break;
            }
           
        }
        ans++;
    }
    cout << ans << "\n";
    for (int i = 0; i < v.size();i++)
    {
        cout << mp[v[i]] << " ";
    }
    nl;

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
	int t = 1;
	//cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }