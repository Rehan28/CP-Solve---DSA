#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

void Rehan(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    map<int, int> xp;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        xp[a[i]]++;
    }
    int y = 0;
    int st = 0;
    for (auto x : xp){
        if(x.second==1 and y!=0 and st!=0){
            break;
        }
        if(x.second==1){
            st++;
        }
        y++;
        mp[x.first]++;
    }
    int x = 1e6;
    for (int i = 0; i <= x;i++){
        if(mp[i]==0){
            cout << i << "\n";
            break;
        }
    }
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