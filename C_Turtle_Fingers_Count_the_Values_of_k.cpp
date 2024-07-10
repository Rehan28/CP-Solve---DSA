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
    ll a,b,l;
    cin>>a>>b>>l;
    vector<ll> pow_a;
    ll pp = 1;
    pow_a.push_back(1);
    vector<ll> pow_b;
    ll pp1 = 1;
    pow_b.push_back(1);
    ll x = l;
    ll xx = l;
    while (x%a==0)
    {
        pp *= a;
        pow_a.push_back(pp);
        x /= a;
    }
    while (l%b==0)
    {
        pp1 *= b;
        pow_b.push_back(pp1);
        l /= b;
    }
    set<ll> st;
    for (int i = 0; i < pow_a.size();i++){
        for (int j = 0; j < pow_b.size();j++){
            ll sum = (pow_a[i] * pow_b[j]);
            if(xx%sum==0 and xx/sum!=0){
                st.insert(xx / sum);
            }
        }
    }
    cout << st.size() << "\n";
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