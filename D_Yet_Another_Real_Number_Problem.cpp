#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define m 1000000007

int binpow(int a, int b) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a, n);

    multiset<pair<int,int>> st;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n;i++){
        int x = 0;
        while(a[i]%2==0){
            a[i] /= 2;
            x++;
        }
        vp.push_back({a[i], x});
    }

    int sum = 0;
    for (int i = 0; i < n;i++){
        int x = vp[i].first;
        int y = vp[i].second;//power
        if(i==0){
            if(vp[i].second!=0){
                st.insert({x, y});
            }
            sum += (binpow(2, y) * x)%m;
        }
        else if(st.size()!=0){
            while(st.size()!=0){
                pair<int,int> it = *st.begin();
                int xx = it.first;
                int yy = it.second;//power
                if(y>32 or (xx<(x*(1<<y)))){
                    //dbg(sum);
                    sum = (sum - (xx * binpow(2, yy)-xx) % m + m) % m;
                    y += yy;
                    st.erase(st.find({xx, yy}));
                }
                else{
                    break;
                }
                
            }
            if(y!=0){
                st.insert({x, y});
            }
            sum += (binpow(2, y) * x)%m;
        }
        else{
            if(y!=0){
                st.insert({x, y});
            }
            sum += (binpow(2, y) * x)%m;
        }
        cout << sum << " ";
    }

    cout << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
