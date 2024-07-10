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
    int n,m;
    cin>>n>>m;
    int a[n];
    cin(a,n);
    int ans = 0;
    for (int i=0; i <n; i++){
        for (int j=i; j<n; j++){
            vector<int> v;
            for (int k=i; k<=j; k++){
                v.push_back(a[k]);
            }
            sort(v.begin(), v.end());
            int x = v.size();
            //cout << i << " " << j << " " << x << "\n";
            int mid;
            if(x%2){
                x = x / 2;
            }
            else{
                x = x / 2;
                x--;
            }
           //dbg(v[x]);
            if(v[x]>m){
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
	//cin>>t;
    for(int i=1;i<=t;i++) {
        Rehan(i);
    }
		return 0;
 }