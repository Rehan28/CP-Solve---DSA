#include <bits/stdc++.h>
using namespace std;

void Muku28() { ios_base::sync_with_stdio(false); cin.tie(NULL); }
#define cin(a, n) for (int i = 0; i < n; i++) { cin >> a[i]; }
#define nl "\n"
#define dbg(x) cout << #x << " = " << x << nl;
#define int long long

struct val {
    bool operator()(pair<int, int> a, pair<int, int> b) const {
        int lena = a.second - a.first + 1;
        int lenb = b.second - b.first + 1;
        if (lena == lenb) {
            return a.first < b.first;
        }
        return lena > lenb;
    }
};

const int N = 2e5 + 9;
int a[N];

void solve(int test) {
    int n;
    cin >> n;
    

    set<pair<int, int>, val> st;

    st.insert({1, n});
    int v = 1;
    while(st.size()){
        auto it = st.begin();
        pair<int, int> value = *it;
        st.erase(it);
        int x = value.first;
        int b = value.second;

        int pos = (x + b) / 2;
        a[pos] = v;

        if(x<=pos-1){
            st.insert({x, pos - 1});
        }

        if(b>=pos+1){
            st.insert({pos + 1, b});
        }
        v++;
    }

    for (int i = 1; i <= n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    Muku28();
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; i++) {
        solve(i);
    }
    return 0;
}
