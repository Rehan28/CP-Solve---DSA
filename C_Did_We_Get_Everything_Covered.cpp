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
    int n, x, m;
    cin >> n >> x >> m;
    string s;
    cin >> s;
    int c = 0;
    map<char, int> mp; 
    set<char> st;
    for (int i = 0; i < m;i++){
        st.insert(s[i]);
        mp[s[i]]++;
        if(st.size()==x){
            c++;
            st.clear();
        }
    }
    //dbg(c);
    if(c>=n){
        yes;
    }
    else{
        no;
        string ss = "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        char f;
        for (int i = 0; i < x;i++){
            //cout << mp[ss[i]] << "\n";
            if(mp[ss[i]]<n){
                f = ss[i];
                break;
            }
        }
        for (int i = 0;i < n ;i++){
            ans += f;
        }
        cout << ans << "\n";
    }
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