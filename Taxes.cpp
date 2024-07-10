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
bool is_prime(int n) {
    int x = sqrt(n);
    for (int i = 2; i <= x;i++) {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int Rehan(int test) {
    int n;
    cin>>n;
    int ans;
    if(is_prime(n)) {
        ans = 1;
    }
    else if(n%2==0) {
        ans = 2;
    }
    else {
        if(is_prime(n-2)) {
            ans = 2;
        }
        else {
            ans = 3;
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