#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    vector<pair<int, int>> vp;
    vector<pair<int, int>> sp;
    vector<pair<int, int>> vp1;
    vector<pair<int, int>> sp1;
    for (int i = 1; i < n - 1;i = i+2){
        int gap = (a[i - 1] - a[i]);
        gap = max(gap, (a[i + 1] - a[i]));
        vp.push_back(make_pair(gap, i));
        sp.push_back(make_pair(a[i - 1], i-1));
    }
    sp.push_back(make_pair(a[n - 2], n - 2));
    sp1.push_back(make_pair(a[1], 1));
    for (int i = 2; i < n - 1;i = i+2){
        int gap = (a[i - 1] - a[i]);
        gap = max(gap, (a[i + 1] - a[i]));
        vp1.push_back(make_pair(gap, i));
        sp1.push_back(make_pair(a[i + 1], i+1));
    }

    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());
    sort(sp.begin(), sp.end());
    reverse(sp.begin(), sp.end());
    int ans[n];
    int x = n;
    for(auto it:vp){
        int pos = it.second;
        ans[pos] = x;
        x--;
    }
    int xx = 1;
    for(auto it:sp){
        int pos = it.second;
        ans[pos] = xx;
        xx++;
    }
    ans[n - 1] = xx;
    int val[n];
    for (int i = 0; i < n;i++){
        val[i] = a[i] + ans[i];
    }
    int mx = 0;
    for (int i = 1; i < n - 1;i++){
        if(val[i-1]<val[i] and val[i+1]<val[i]){
            mx++;
        }
    }


    sort(vp1.begin(), vp1.end());
    reverse(vp1.begin(), vp1.end());
    sort(sp1.begin(), sp1.end());
    reverse(sp1.begin(), sp1.end());
    int ans1[n];
    int x1 = n;
    for(auto it:vp1){
        int pos = it.second;
        ans1[pos] = x1;
        x1--;
    }
    int xx1 = 1;
    for(auto it:sp1){
        int pos = it.second;
        ans1[pos] = xx1;
        xx1++;
    }
    ans1[0] = xx1;
    int val1[n];
    for (int i = 0; i < n;i++){
        val1[i] = a[i] + ans1[i];
    }
    int mx1 = 0;
    for (int i = 1; i < n - 1;i++){
        if(val1[i-1]<val1[i] and val1[i+1]<val1[i]){
            mx1++;
        }
    }


    if(mx>=mx1){
        for (int i = 0; i < n;i++){
            cout << ans[i] << " ";
        }
    }
    else{
        for (int i = 0; i < n;i++){
            cout << ans1[i] << " ";
        }
    }
    cout << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
