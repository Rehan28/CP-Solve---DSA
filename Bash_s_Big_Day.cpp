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
const int N = 1e5 + 9;
int spf[N + 1];
void Find() {
    for (int i = 1;i<N;i++) {
        spf[i] = i;
    }
    for (int i = 2;i<N;i++) {
        for (int j = i; j < N;j+=i) {
            spf[j] = min(spf[j], i);
        }
    }
}
int Rehan(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    map<int, int> mp;
    for (int i = 0;i<n;i++){
        int x = a[i];
        while(x>1){
            int p = spf[x];
            mp[p]++;
            while(x%p==0){
                x /= p;
            }
        }
    }
    int ans = 1;
    for(auto x : mp) {
        ans = max(ans, x.second);
    }
    cout << ans << "\n";
    return 0;
}
//--------------28--------------//
int main() {
    Muku28();
	int t = 1;
	//cin>>t;
    Find();
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }