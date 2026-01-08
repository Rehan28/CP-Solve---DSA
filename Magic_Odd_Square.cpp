#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;

    int x = 1;
  
        int y = 2;
        int mid = n / 2;
        mid++;
        int st = mid;
        int end = mid;
        for(int i = 1; i <= (n/2)+1;i++){
            for(int j = 1; j < st;j++){
                cout << y << " ";
                y = y + 2;
            }
            for (int j = st; j <= end;j++){
                cout << x << " ";
                x = x + 2;
            }

            for(int j = end+1; j <= n;j++){
                cout << y << " ";
                y = y + 2;
            }
            st--;
            end++;
            cout << "\n";
        }
        st++;
        end--;
        for(int i = (n/2)+2; i <= n;i++){
            st++;
            end--;
            for(int j = 1; j < st;j++){
                cout << y << " ";
                y = y + 2;
            }

            for (int j = st; j <= end;j++){
                cout << x << " ";
                x = x + 2;
            }

            for(int j = end+1; j <= n;j++){
                cout << y << " ";
                y = y + 2;
            }
            cout << "\n";
        }
    
    
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}
