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
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int mex = 0;
    int pfx[n + 1];
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]] = 1;
        if(a[i]==mex){
            while(mp[mex]==1){
                mex += 1;
            }
        }
        pfx[i] = mex;
       // cout << mex << " ";
    }
    //nl;
    int mex1 = 0;
    int pfx1[n + 1];
    map<int, int> mp1;
    for (int i = n-1; i >-1 ;i--){
        mp1[a[i]] = 1;
        if(a[i]==mex1){
            while(mp1[mex1]==1){
                mex1 += 1;
            }
        }
        pfx1[i] = mex1;
       // cout << mex1 << " ";
    }
    //nl;
    for (int i = 0; i < n-1;i++){
        if(pfx[i]==pfx1[i+1]){
            cout << 2 << "\n";
            cout << 1 << " " << i + 1 << "\n";
            cout << i+2 << " " << n << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
	int t = 1;
	cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }