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
    map<int, int> mp;
    set<int> st;
    for (int i = 0; i < n;i++){
        st.insert(i);
    }
    int mex = 0;
    int x = 0;
    mp[0] = 1;
    for (int i = 0; i < n;i++){
        for (auto it : st){
            int j = it;
            int mex1 = mex;
            int y = j;
            if(mex1==j){
                while (1){
                    if(mp[y]==0){
                        break;
                    }
                    y++;
                    mex1 = y;
                }
            }
            if((mex1-a[i])==j){
                cout << j << " ";
                mex = mex1;
                mp[y] = 1;
                st.erase(st.find(j));
                break;
            }
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
