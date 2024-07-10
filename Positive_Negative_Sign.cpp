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
int Rehan(int test){
    ll n,m;
    cin>>n>>m;
    // ll neg_sum = (m * (m + 1)) / 2;//neg gular sum
    // ll pos_sum = ((2 * m) * ((2 * m) + 1)) / 2;
    // pos_sum -= neg_sum;//pos gular sum
    // ll sum_dif = pos_sum - neg_sum;
    // ai approace chara o kora jay 
    // 1,2,3,4,5,6,7 dakha jay j nporer number n boro hobe
    //so, -1, -2, 3, 4 ader sum hobe = 2 * 2 = 4;
    ll sum = m * m;

    ll number_of_time = n / (2 * m);
    cout << "Case " << test << ": " << number_of_time*sum << "\n";

    return 0;
}
//--------------28--------------//
int main(){
    Muku28();int t = 1;
		cin>>t;
    for(int i=1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }