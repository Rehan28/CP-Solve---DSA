#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

bool cmp(string a, string b) {
    if (a.size() == b.size()) return a < b; 
    return a.size() < b.size();             
}

void solve(int test) {
    int n;
    cin>>n;

    set<string> st;

    for (int i = 0; i < n;i++){
        int k;
        cin >> k;
        string s = "";
        for (int j = 0; j < k;j++){
            int x;
            cin >> x;
            s += to_string(x);
        }
        st.insert(s);
    }

    int last = 0;
    string ans = "";
    while(st.size()){
        string s1 = *st.begin();
        dbg(s1);
        int s = s1.size();
        for (int i = 0; i < s;i++){
            ans += s1[i];
        }
        //dbg(ans);
        auto it = st.begin();
        it++;
        vector<string> v;
        for (; it != st.end();it++){
            v.push_back(*it);
        }
        st.clear();

        last += s;
        for (int i = 0; i < v.size();i++){
            string ss = "";
            //dbg(v[i]);
            for (int j = last; j < v[i].size();j++){
                //dbg(v[i][j]);
                ss += v[i][j];
            }
            if(ss.size()!=0){
                st.insert(ss);
            }
            
        }
    }
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
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
