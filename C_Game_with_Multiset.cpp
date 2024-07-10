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
    int a[32] = {0};
    while (n--){
        int x, y;
        cin >> x >> y;
        if(x==1){
           a[y]++;
        }
        else{
            for (int i = 29; i >-1;i--){
                int val = (1<<i);
                if(val<=y){
                    y -= (val * min(y / val, a[i]));
                }
            }
            if(y==0){
                yes;
            }
            else{
                no;
            }
        }
    }
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