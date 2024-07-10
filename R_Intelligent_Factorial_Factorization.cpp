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
  
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    int x = 1000;
    int spf[x];
    for (int i = 1; i < x;i++){
        spf[i] = i;
    }
    for (int i = 2; i < x;i++){
        for (int j = i; j < x;j += i){
            spf[j] = min(spf[j], i);
        }
    }
    cin >> t;
    for (int i = 1;i<=t;i++){
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 2; i <= n;i++){
            int y = i;
            while (y > 1)
            {
                int x = spf[y];
                mp[x]++;
                y /= x;
            }
        }
        vector<pair<int, int>> vp;
        for(auto x:mp){
            vp.push_back(make_pair(x.first, x.second));
        }
        cout << "Case " << i << ": " << n << " = ";
        int sz = vp.size() - 1;
        for (int i = 0; i < sz;i++){
             cout << vp[i].first << " (" << vp[i].second << ") * ";
        }
        cout << vp[sz].first << " (" << vp[sz].second << ")\n";
    }
    return 0;
 }