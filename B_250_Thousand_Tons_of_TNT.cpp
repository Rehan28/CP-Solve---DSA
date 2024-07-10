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
    int n;
    cin>>n;
    ll a[n];
    cin(a,n);
    ll pfx[n + 1];
    pfx[1] = a[0];
    for (int i = 1; i < n;i++){
        pfx[i+1] = pfx[i] + a[i];
    }
    ll ans = 0;
    for (int i = 1; i <= n / 2;i++){
        if(n%i==0){
            ll presum = 0;
            ll mxsum = LONG_LONG_MIN;
            ll mnsum = LONG_LONG_MAX;
            for (int j = i; j <= n;j += i){
                ll sum = pfx[j] - presum;
                //dbg(pfx[j]);
                presum = pfx[j];
                mxsum = max(sum, mxsum);
                mnsum = min(sum, mnsum);
            }
            //cout << i << " " << mxsum << " " << mnsum << "\n";
            mxsum = (mxsum - mnsum);
            ans = max(mxsum, ans);
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