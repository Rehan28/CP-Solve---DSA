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

int Rehan(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int ans = 1;
    for (int i = 1; i <n;i++) {
        if(n%i==0){
            int gc = 0;
            for (int j = 0; j < n - i;j++){
                gc = __gcd(gc, abs(a[j] - a[j + i]));
            }
            if(gc!=1){
                ans++;
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
	cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }