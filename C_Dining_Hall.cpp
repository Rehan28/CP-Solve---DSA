#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);

    vector<pair<int, int>> vp;
    for (int sum = 0; sum <= 1000; sum++) { 
        for (int x = 0; x <= sum; x++) { 
            int y = sum - x;
            vp.push_back({x, y});
        }
    }

    // for(int i=0;i<vp.size();i++){
    //     cout<<vp[i].first<<" "<<vp[i].second<<nl;
    // }
    int occ = 0;
    int no = 0;
    map<pair<int, int>, int> mp;

    for (int i = 0; i < n;i++){
        if(a[i]==1){
            dbg(occ);
            int oc = vp[occ].first;
            int oc1 = vp[occ].second;
            int x1 = (3 * oc + 1);
            int y1 = (3 * oc1 + 1);
            int x2 = (3 * oc + 1);
            int y2 = (3 * oc1 + 2);
            int x3 = (3 * oc + 2);
            int y3 = (3 * oc1 + 1);
            int x4 = (3 * oc + 2);
            int y4 = (3 * oc1 + 2);

            if(mp[{x1, y1}]==0){
                mp[{x1, y1}] = 1;
                cout << x1 << " " << y1 << "\n";
            }
            else if(mp[{x2, y2}]==0){
                
                mp[{x2, y2}] = 1;
                cout << x2 << " " << y2 << "\n";
            }
            else if(mp[{x3, y3}]==0){
                mp[{x3, y3}] = 1;
                cout << x3 << " " << y3 << "\n";
            }
            else if(mp[{x4, y4}]==0){
                mp[{x4, y4}] = 1;
                cout << x4 << " " << y4 << "\n";
            }
            else{
                occ++;
                oc = vp[occ].first;
                oc1 = vp[occ].second;
                x1 = (3 * oc + 1);
                y1 = (3 * oc1 + 1);
                x2 = (3 * oc + 1);
                y2 = (3 * oc1 + 2);
                if(mp[{x1, y1}]==0){
                    mp[{x1, y1}] = 1;
                    cout << x1 << " " << y1 << "\n";
                }
                else{
                    mp[{x2, y2}] = 1;
                    cout << x2 << " " << y2 << "\n";
                }
                if(occ==no){
                    no++;
                }
            }
        }
        else{
            dbg(no);
            int oc = vp[no].first;
            int oc1 = vp[no].second;
            int x1 = (3 * oc + 1);
            int y1 = (3 * oc1 + 1);
            cout<<x1<<" "<<y1<<nl;
            mp[{x1, y1}] = 1;
            no++;
        }   
    }
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
