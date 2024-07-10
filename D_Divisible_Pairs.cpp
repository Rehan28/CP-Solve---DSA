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
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    cin(a,n);
    map<pair<int, int>, int> mp;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++){
        int aa = a[i] % x;
        int bb = a[i] % y;
        mp[{aa, bb}]++;
        //cout << aa << " " << bb << "\n";
        vp.push_back(make_pair(aa, bb));
    }
    ll ans = 0;
    //dbg(6);
    for(auto it : vp){
        int aa = it.first;
        int xx = aa;
        int bb = it.second;
        int yy = bb;
        aa = x - aa;
        if(mp[{aa,bb}]){
            mp[{xx, yy}]--;
            //cout << aa << " " << bb <<" "<<mp[{aa,bb}]<< "\n";
            ans += mp[{aa, bb}];
        }
        else if(aa==x){
            aa = 0;
            mp[{xx, yy}]--;
            //cout << aa << " " << bb <<" "<<mp[{aa,bb}]<< "\n";
            ans += mp[{aa, bb}];
        }
        
    }
    cout << ans << "\n";
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