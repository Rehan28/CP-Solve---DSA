#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
//cout << "Case " << test << ": ";
//Muku28
int Rehan(int test) {
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    multiset<ll> st;
    for (int i = 0; i < n;i++) {
        st.insert(a[i]);
    }
    ll ans = 0;
    while(st.size()>1){
        if(st.size()==1){
            break;
        }
        auto pos = st.begin();
        ll x = *pos;
        pos++;
        ll y = *pos;
        //cout << x << y << "\n";
        if(x==y){
            st.erase(st.find(x));
            st.erase(st.find(y));
            // dbg(5);
            // dbg(st.size());
            x = x + x;
            st.insert(x);
        }
        else{
            ll c = 0;
            bool f = false;
            ll ini = x;
            while (x<y)
            {
                x = (2 * x);
                c++;
                if(x==y){
                    f = true;
                    st.erase(st.find(ini));
                    st.erase(st.find(y));
                    st.insert(x + x);
                    break;
                }
            }
            if(f){
                ans += c;
            }
            else{
                ans = -1;
                break;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
	int t = 1;
	//cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }