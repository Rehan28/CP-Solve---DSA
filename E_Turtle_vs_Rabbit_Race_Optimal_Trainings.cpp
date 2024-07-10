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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    vector<int> pfx;
    pfx.push_back(a[0]);
    for (int i = 1; i < n;i++){
        int x = pfx[i - 1] + a[i];
        pfx.push_back(x);
    }
    int q;
    cin >> q;
    while(q--){
        int l, u;
        cin >> l >> u;
        int bad = 0;
        if(l!=1){
            bad = pfx[l - 2];
        }
        u += bad;
        u++;
        auto it = lower_bound(pfx.begin(), pfx.end(),u);
        int pos = it - pfx.begin();
        if(pos>=n){
            pos = n-1;
        }
        int pos_nile = pfx[pos] - u;
        u--;
        int pos_bad_dile = (u - pfx[pos - 1]);
        if(pos_nile<pos_bad_dile or (n-l)==0){
            pos++;
            if(pos<=l){
                cout << l << " ";
            }
            else{
                cout << pos<< " ";
            }
        }
        else{
           if(pos<=l){
                cout << l << " ";
            }
            else{
                cout << pos<< " ";
            }
        }
    }
    nl;
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