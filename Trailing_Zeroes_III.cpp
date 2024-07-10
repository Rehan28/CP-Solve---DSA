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

//factorial a koyta trailling zero ache
int legendre(int n,int p) {
    int ans = 0;
    while(n>1){
        ans += n / p;
        n /= p;
    }
    return ans;
}
int Rehan(int test){
    int n;
    cin>>n;
    // Binary search korty hobe
    int l = 1, r = 5 * n;//5*n karon ((5*n)/5 = n) toh minimum n number of 5 paoa e jabe
    int mid;
    int ans = -1;
    while(l<=r){
        mid = l + (r - l) / 2;
        int number_of_five = legendre(mid, 5);
        if(number_of_five == n){
            ans = mid;
            r = mid - 1;
        }
        else if(number_of_five>n){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if(ans==-1){
        cout << "Case " << test << ": impossible\n";
    }
    else{
        cout << "Case " << test << ": " << ans << "\n";
    }
   
    return 0;
}
//--------------28--------------//
int main(){
    Muku28();
	int t = 1;
	cin>>t;
    for(int i=1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }