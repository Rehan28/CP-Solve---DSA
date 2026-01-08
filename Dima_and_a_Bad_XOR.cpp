#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007

const int N = 505;
int a[N][N];

void solve(int test) {
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    for (int pos = 0; pos < 12;pos++){
        int last = -1;
        int one = 0;
        for (int i = 0; i < n;i++){
            int c = 0;
            int c1 = 0;
            for (int j = 0; j < m;j++){
                if(a[i][j] & (1<<pos)){
                    c++;
                }
                else{
                    c1++;
                }
            }
            if(c!=0 and c1!=0){
                last = i;
                one++;
            }
            else if(c!=0){
                one++;
            }
            
        }
        if(last>=0){
            cout << "TAK\n";
            one--;
            for (int i = 0; i < n;i++){
                int x = 1;
                bool f = true;
                for (int j = 0; j < m;j++){
                    if(a[i][j]&(1<<pos)){
                        f = false;
                        break;
                    }
                }
                if((i==last and one%2) or f){
                    x = 0;
                }
                for (int j = 0; j < m;j++){
                    if((a[i][j] & (1 << pos))){
                        if(x==1){
                          cout << j+1 << " ";
                          break;  
                        }
                    }
                    else if(x==0){
                         cout << j+1 << " ";
                        break;
                    }
                }
            }
            cout << "\n";
            return;
        }
        else if(one%2){
            cout << "TAK\n";
            for (int i = 0; i < n;i++){
                int x = 1;
                bool f = true;
                for (int j = 0; j < m;j++){
                    if(a[i][j]&(1<<pos)){
                        f = false;
                        break;
                    }
                }
                if(f){
                    x = 0;
                }
                for (int j = 0; j < m;j++){
                   if((a[i][j] & (1 << pos))){
                        if(x==1){
                          cout << j+1 << " ";
                          break;  
                        }
                    }
                    else if(x==0){
                         cout << j+1 << " ";
                        break;
                    }
                }
            }
            cout << "\n";
            return;
        }
    }
    cout << "NIE\n";
}
int main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
