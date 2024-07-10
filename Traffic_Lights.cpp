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
    int x,n;
    cin>>x>>n;
    map<int, int> mp; // kono number ar pichone k ache
    set<int> num;// kon kon point ache amr, 0 and x thakbe default
    num.insert(0);
    num.insert(x);
    mp[x] = 0;// initially x ar back 0
    multiset<int> st;
    st.insert(x); // initially maxdis = x;
    while(n--){
        int a;
        cin >> a;
        num.insert(a);
        /*auto it = num.upper_bound(a);
        // j number otar porer number konta
        int front_num = *it;
        int f_dis = (front_num - a);// porer number ar sathe dis
        int back_num = mp[front_num];// front ar back number konta
        int pre_val = front_num - back_num;
        int b_dis = (a - back_num);//dis
        mp[front_num] = a;
        mp[a] = back_num;// notun entry*/
        auto it = num.find(a);
        int front_val = *next(it);
        int back_val = *prev(it);//in this case we dont need mp
        int pre_val = front_val - back_val;
        int f_dis = front_val - a;
        int b_dis = a - back_val;
        auto pos = st.find(pre_val);
        if(pos!=st.end()){
            st.erase(pos);// number ta delete debo
        }
        st.insert(f_dis);// new gula import kora hoicy
        st.insert(b_dis);
        auto xx = st.end();
        xx--;
        cout << *xx << " ";// last number ba boro dis korbo
    }
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
