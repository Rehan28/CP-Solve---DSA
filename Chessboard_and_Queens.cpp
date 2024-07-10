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

vector<vector<int>> ans;
void permutation(vector<int> &v,int idx){
    if(v.size()==idx){
        ans.push_back(v);
        return;
    }
    for (int i = idx; i < v.size();i++){
        swap(v[idx], v[i]);
        permutation(v, idx + 1);
        swap(v[idx], v[i]);
    }
}

void solve(int test) {
    int n = 8;
    map<pair<int, int>, int> mp;
    vector<int> v;
    for (int i = 0; i < 8;i++){
        v.push_back(i + 1);
    }
    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        for (int j = 0; j < 8;j++){
            if(s[j]=='*'){
                mp[{i + 1, j + 1}] = 1;
            }
        }
    }
    permutation(v, 0);
    int c = 0;
    for (int i = 0; i < ans.size();i++){
        bool f = true;
        map<int, int> fort;
        map<int, int> back;
        for (int j = 0; j < ans[i].size();j++){
            int x = j + 1;
            int y = ans[i][j];
            if(mp[{x,y}]==1){
                f = false;
                break;
            }
            int xx = (j + 1) - y;
            fort[xx]++;
            int yy = (j + 1) - (8 - y);
            back[yy]++;
        }
        for(auto x : fort){
            if(x.second>1){
                f = false;
                break;
            }
        }
        for(auto x : back){
            if(x.second>1){
                f = false;
                break;
            }
        }
        if(f){
            c++;
        }  
    }
    cout << c << "\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
